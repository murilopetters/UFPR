#include <iostream>
using namespace std;

int main() {
    double largura, velocidade, compactacoes, eficiencia;

    // Entrada do usuário
    cout << "Digite a largura do rolo compactador (em metros): ";
    cin >> largura;
    cout << "Digite a velocidade do rolo (em metros por minuto): ";
    cin >> velocidade;
    cout << "Digite o número de passadas por área: ";
    cin >> compactacoes;

    // Cálculo
    eficiencia = largura * velocidade * compactacoes;

    // Saída
    cout << "A eficiência do compactador é: " << eficiencia << " m²/min." << endl;

    return 0;
}
