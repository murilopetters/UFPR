import os
import shutil
import yaml
from sklearn.metrics import confusion_matrix, roc_curve, auc, precision_recall_curve
from sklearn.preprocessing import label_binarize
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
import subprocess
from pathlib import Path
from IPython.display import display, FileLink

# Caminhos base
image_base_dir = '/kaggle/input/training/dataset/train/images'
label_base_dir = '/kaggle/input/training/dataset/train/labels'
input_data_yaml_path = '/kaggle/input/training/dataset/data.yaml'
project_dir = '/kaggle/working'
data_yaml_path = f'{project_dir}/data.yaml'
hyp_yaml_path = f'{project_dir}/hyp.custom.yaml'

# Função: Preparar os arquivos necessários
def prepare_yaml_files():
    """Prepara e atualiza os arquivos data.yaml e hyp.custom.yaml."""
    # Copiar o arquivo data.yaml para o diretório do projeto
    shutil.copy(input_data_yaml_path, data_yaml_path)

    # Atualizar os caminhos no data.yaml
    with open(data_yaml_path, 'r') as file:
        data = yaml.safe_load(file)

    data['train'] = '/kaggle/input/training/dataset/train'
    data['val'] = '/kaggle/input/training/dataset/val'

    # Salvar o arquivo atualizado
    with open(data_yaml_path, 'w') as file:
        yaml.dump(data, file)

    # Definir hiperparâmetros personalizados
    hyp_params = {
        'lr0': 0.0005,
        'lrf': 0.01,
        'momentum': 0.9,
        'weight_decay': 0.00005,
        'warmup_epochs': 3.0,
        'box': 0.025,
        'cls': 0.5,
        'iou_t': 0.3,
        'scale': 0.5,
        'mosaic': 1.0,
    }

    # Salvar hiperparâmetros em hyp.custom.yaml
    with open(hyp_yaml_path, 'w') as file:
        yaml.dump(hyp_params, file)

    print("Arquivos data.yaml e hyp.custom.yaml preparados.")

# Função: Executar o treinamento do YOLOv5
def train_yolov5():
    """Executa o treinamento do modelo YOLOv5 com parâmetros personalizados."""
    command = (
        f"python train.py --img 768 --batch 32 --epochs 100 "
        f"--data {data_yaml_path} --weights yolov5m.pt "
        f"--hyp {hyp_yaml_path} --workers 4 --patience 50"
    )
    result = subprocess.run(command, shell=True, capture_output=True, text=True)
    if result.returncode == 0:
        print("Treinamento concluído com sucesso.")
    else:
        print("Erro durante o treinamento.")
        print(result.stderr)

# Função: Listar arquivos gerados
def list_files(directory):
    """Lista todos os arquivos gerados no diretório especificado."""
    print(f"Arquivos no diretório {directory}:")
    for root, dirs, files in os.walk(directory):
        for file in files:
            print(os.path.join(root, file))

# Função: Compactar resultados para download
def download_results(path, output_name):
    """Compacta e disponibiliza os resultados para download."""
    zip_name = f"{output_name}.zip"
    command = f"zip -r {zip_name} {path}"
    result = subprocess.run(command, shell=True, capture_output=True, text=True)
    if result.returncode == 0:
        print(f"Resultados compactados em {zip_name}.")
        display(FileLink(zip_name))
    else:
        print("Erro ao compactar os resultados.")
        print(result.stderr)

# Executar as funções
if __name__ == "__main__":
    prepare_yaml_files()
    train_yolov5()
    list_files('/kaggle/working/yolov5/runs/train/exp')
    download_results('/kaggle/working/yolov5/runs/train/exp', 'exp_results')