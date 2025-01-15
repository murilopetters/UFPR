#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio, superlevacao, coefAtrito, velocidade;

    // Entrada do usuário
    cout << "Digite o raio da curva (em metros): ";
    cin >> raio;
    cout << "Digite a superlevação (em decimal): ";
    cin >> superlevacao;
    cout << "Digite o coeficiente de atrito: ";
    cin >> coefAtrito;

    // Cálculo
    velocidade = sqrt(raio * 9.81 * (superlevacao + coefAtrito));

    // Saída
    cout << "A velocidade máxima na curva é: " << velocidade * 3.6 << " km/h." << endl;

    return 0;
}
