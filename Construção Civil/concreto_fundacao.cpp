#include <iostream>
using namespace std;

int main() {
    int numFundacoes;
    double comprimento, largura, altura, volumeTotal = 0;

    // Entrada do usuário
    cout << "Digite o número de fundações: ";
    cin >> numFundacoes;

    for (int i = 1; i <= numFundacoes; i++) {
        cout << "Digite o comprimento da fundação " << i << " (em metros): ";
        cin >> comprimento;
        cout << "Digite a largura da fundação " << i << " (em metros): ";
        cin >> largura;
        cout << "Digite a altura da fundação " << i << " (em metros): ";
        cin >> altura;

        volumeTotal += comprimento * largura * altura;
    }

    // Saída
    cout << "O volume total de concreto necessário é: " << volumeTotal << " m³" << endl;

    return 0;
}
