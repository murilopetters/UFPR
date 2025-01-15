# 🚀 YOLOv5 Model Training Script

🔍 **Descrição**  
Este projeto implementa o treinamento de modelos de detecção de objetos utilizando o YOLOv5. Ele inclui a configuração de hiperparâmetros, ajustes no arquivo `data.yaml`, execução do treinamento e exportação dos resultados. O objetivo principal é detectar irregularidades em estruturas metálicas com eficiência e precisão.

---

📦 **Como Usar**  
*Nota: Este script foi desenvolvido e testado no ambiente Kaggle. Certifique-se de adaptar os caminhos e configurações, se necessário.*  

1. **Clone o projeto:**  
   ```bash
   git clone <URL_DO_REPOSITORIO>
   cd <NOME_DO_REPOSITORIO>
   ```

2. **Instale os requisitos necessários:**  
   Certifique-se de ter o YOLOv5 e as dependências configuradas corretamente. Siga as instruções no [repositório oficial do YOLOv5](https://github.com/ultralytics/yolov5).

3. **Organize os dados:**  
   Estruture os dados no seguinte formato:
   ```plaintext
   dataset/
   ├── train/
   │   ├── images/
   │   │   ├── img1.jpg
   │   │   ├── img2.jpg
   │   └── labels/
   │       ├── img1.txt
   │       ├── img2.txt
   ├── val/
   │   ├── images/
   │   └── labels/
   └── data.yaml
   ```

4. **Execute o script de treinamento:**  
   ```bash
   python script.py
   ```

---

📊 **Resultados**  
- Modelos treinados e salvos no diretório `runs/train/exp`.
- Configurações de hiperparâmetros ajustáveis no arquivo `hyp.custom.yaml`.
- Arquivo compactado com todos os resultados disponíveis para download.

---

🛠 **Tecnologias Utilizadas**

- **Python 3.8+**  
- **YOLOv5**  
- **Scikit-learn**  
- **Matplotlib**  
- **Seaborn**  

---

📃 **Licença**  
Licenciado sob a MIT License.