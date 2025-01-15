#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double comprimento, diametro, velocidade, fatorAtrito, perdaCarga;

    // Entrada do usuário
    cout << "Digite o comprimento da tubulação (em metros): ";
    cin >> comprimento;
    cout << "Digite o diâmetro da tubulação (em metros): ";
    cin >> diametro;
    cout << "Digite a velocidade do fluido (em m/s): ";
    cin >> velocidade;
    cout << "Digite o fator de atrito de Darcy-Weisbach: ";
    cin >> fatorAtrito;

    // Cálculo
    perdaCarga = (fatorAtrito * comprimento * pow(velocidade, 2)) / (2 * diametro * 9.81);

    // Saída
    cout << "A perda de carga na tubulação é: " << perdaCarga << " metros de coluna d'água." << endl;

    return 0;
}
