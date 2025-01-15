#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double velocidade, coefAtrito, raio;

    // Entrada do usuário
    cout << "Digite a velocidade do veículo (em km/h): ";
    cin >> velocidade;
    cout << "Digite o coeficiente de atrito: ";
    cin >> coefAtrito;

    // Cálculo
    velocidade = velocidade / 3.6; // Conversão para m/s
    raio = pow(velocidade, 2) / (9.81 * coefAtrito);

    // Saída
    cout << "O raio mínimo da curva é: " << raio << " metros." << endl;

    return 0;
}
