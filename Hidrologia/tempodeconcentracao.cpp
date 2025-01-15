#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double comprimento, declividade, tempoConcentracao;

    cout << "Digite o comprimento do curso d'água (em km): ";
    cin >> comprimento;
    cout << "Digite a declividade média da bacia (em %): ";
    cin >> declividade;

    tempoConcentracao = 0.01947 * pow(comprimento, 0.77) * pow(declividade, -0.385);

    cout << "O tempo de concentração é: " << tempoConcentracao << " horas." << endl;

    return 0;
}
