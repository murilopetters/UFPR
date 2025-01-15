#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double velocidade, raio, coefAtrito, superlevacao;

    // Entrada do usuário
    cout << "Digite a velocidade do veículo (em km/h): ";
    cin >> velocidade;
    cout << "Digite o raio da curva (em metros): ";
    cin >> raio;
    cout << "Digite o coeficiente de atrito: ";
    cin >> coefAtrito;

    // Cálculo
    velocidade = velocidade / 3.6; // Conversão para m/s
    superlevacao = (pow(velocidade, 2) / (raio * 9.81)) - coefAtrito;

    // Saída
    cout << "A taxa de superlevação necessária é: " << superlevacao * 100 << "%" << endl;

    return 0;
}
