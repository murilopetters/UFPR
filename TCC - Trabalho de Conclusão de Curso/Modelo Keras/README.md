# 🚀 Keras Model Training Script

🔍 **Descrição**  
Este projeto implementa um fluxo completo para treinamento de modelos de aprendizado profundo com a biblioteca Keras. O objetivo principal é detectar irregularidades em estruturas metálicas utilizando redes neurais convolucionais (CNNs). O código inclui desde o pré-processamento de dados até a avaliação e exportação de resultados.

---

📦 **Como Usar**
*Nota: Este script foi desenvolvido e testado no ambiente Kaggle. Certifique-se de adaptar os caminhos e configurações, se necessário.*  

1. **Clone o projeto:**  
   ```bash
   git clone <URL_DO_REPOSITORIO>
   cd <NOME_DO_REPOSITORIO>
   ```

2. **Instale os requisitos:**  
   ```bash
   pip install -r requirements.txt
   ```

3. **Organize os dados:**  
   Certifique-se de que os dados estão estruturados no seguinte formato:
   ```plaintext
   dataset_keras/
   ├── train/
   │   ├── class_1/
   │   ├── class_2/
   │   └── ...
   ├── val/
   │   ├── class_1/
   │   ├── class_2/
   │   └── ...
   └── data.yaml
   ```

4. **Execute o script principal:**  
   ```bash
   python script.py
   ```

---

📊 **Resultados**  
- Modelo treinado salvo como `modelo_customizado.keras`.
- Histórico de treinamento disponível em `history_customizado.csv`.
- Gráficos de precisão, perda, matriz de confusão, curvas ROC e precisão-recall salvos como imagens.
- Todos os resultados compactados em `resultados_customizados.zip` para download.

---

🛠 **Tecnologias Utilizadas**

- **Python 3.8+**  
- **TensorFlow**  
- **Scikit-learn**  
- **Matplotlib**  
- **Seaborn**  

---

📃 **Licença**  
Licenciado sob a MIT License.