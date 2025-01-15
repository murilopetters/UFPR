#include <iostream>
using namespace std;

int main() {
    double densidade, velocidade, comprimento, viscosidade, reynolds;

    cout << "Digite a densidade do fluido (em kg/m³): ";
    cin >> densidade;
    cout << "Digite a velocidade do fluido (em m/s): ";
    cin >> velocidade;
    cout << "Digite o comprimento característico (em metros): ";
    cin >> comprimento;
    cout << "Digite a viscosidade dinâmica (em Pa.s): ";
    cin >> viscosidade;

    reynolds = (densidade * velocidade * comprimento) / viscosidade;

    cout << "O número de Reynolds é: " << reynolds << "." << endl;

    return 0;
}
