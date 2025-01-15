import os
import shutil
import yaml
import zipfile
from sklearn.metrics import confusion_matrix, roc_curve, auc, precision_recall_curve
from sklearn.preprocessing import label_binarize
import seaborn as sns
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Conv2D, MaxPooling2D, Flatten, Dense, Dropout, Input
from IPython.display import FileLink

# Criação do arquivo requirements.txt e instalação de dependências (para Kaggle)
def setup_requirements():
    """
    Cria o arquivo requirements.txt e instala as dependências listadas.
    Ajuste ou remova esta função ao transferir para um ambiente fora do Kaggle.
    """
    with open('requirements.txt', 'w') as f:
        f.write('numpy\npandas\nscikit-learn\nseaborn\nmatplotlib\ntensorflow\npyyaml\n')
    os.system('pip install -r requirements.txt')

# Preparação dos dados
def prepare_data(input_data_yaml_path, project_dir):
    """
    Carrega e atualiza o arquivo data.yaml com os caminhos para os conjuntos de dados de treino e validação.
    """
    data_yaml_path = f'{project_dir}/data.yaml'
    shutil.copy(input_data_yaml_path, data_yaml_path)
    with open(data_yaml_path, 'r') as file:
        data = yaml.safe_load(file)
    data['train'] = '/path/to/train'
    data['val'] = '/path/to/val'
    with open(data_yaml_path, 'w') as file:
        yaml.dump(data, file)
    return data

# Construção do modelo
def build_model(input_shape, num_classes):
    """
    Constrói o modelo de aprendizado profundo usando a biblioteca Keras.
    """
    model = Sequential([
        Input(shape=input_shape),
        Conv2D(16, (3, 3), activation='relu'),
        MaxPooling2D((2, 2)),
        Conv2D(32, (3, 3), activation='relu'),
        MaxPooling2D((2, 2)),
        Conv2D(64, (3, 3), activation='relu'),
        MaxPooling2D((2, 2)),
        Flatten(),
        Dense(128, activation='relu'),
        Dropout(0.5),
        Dense(num_classes, activation='softmax')
    ])
    model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])
    return model

# Função para treinamento
def train_model(model, train_data_gen, val_data_gen, batch_size, epochs):
    """
    Realiza o treinamento do modelo com os dados de treino e validação.
    """
    history = model.fit(
        train_data_gen,
        steps_per_epoch=train_data_gen.samples // batch_size,
        epochs=epochs,
        validation_data=val_data_gen,
        validation_steps=val_data_gen.samples // batch_size
    )
    return history

# Funções para plotar gráficos
def plot_metrics(history):
    """
    Plota as métricas de treino e validação (Acurácia e Perda).
    """
    history_df = pd.DataFrame(history.history)
    plt.figure(figsize=(10, 5))
    plt.plot(history_df['accuracy'], label='Train Accuracy')
    plt.plot(history_df['val_accuracy'], label='Validation Accuracy')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.legend()
    plt.show()

    plt.figure(figsize=(10, 5))
    plt.plot(history_df['loss'], label='Train Loss')
    plt.plot(history_df['val_loss'], label='Validation Loss')
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.legend()
    plt.show()

# Função principal
def main():
    """
    Fluxo principal do script: configuração, carregamento de dados, construção do modelo,
    treinamento e avaliação.
    """
    # Configurações iniciais
    project_dir = '/kaggle/working'
    input_data_yaml_path = '/kaggle/input/keras-training/dataset_keras/data.yaml'

    # Preparar dados
    data = prepare_data(input_data_yaml_path, project_dir)
    num_classes = data['nc']
    print(f"Número de classes: {num_classes}")

    # Parâmetros de treinamento
    img_height, img_width = 224, 224  # Dimensões otimizadas
    batch_size = 16
    epochs = 50

    # Geradores de dados
    train_datagen = ImageDataGenerator(rescale=1./255, rotation_range=10, zoom_range=0.1, horizontal_flip=True)
    val_datagen = ImageDataGenerator(rescale=1./255)
    train_data_gen = train_datagen.flow_from_directory('/path/to/train', target_size=(img_height, img_width), batch_size=batch_size, class_mode='categorical')
    val_data_gen = val_datagen.flow_from_directory('/path/to/val', target_size=(img_height, img_width), batch_size=batch_size, class_mode='categorical')

    # Construir modelo
    model = build_model((img_height, img_width, 3), num_classes)

    # Treinamento
    history = train_model(model, train_data_gen, val_data_gen, batch_size, epochs)

    # Plotar métricas
    plot_metrics(history)

if __name__ == "__main__":
    main()