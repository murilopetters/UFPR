#include <iostream>
#include <cmath> // Para a constante M_PI
using namespace std;

int main() {
    double raio, altura, volume;

    // Entrada do usuário
    cout << "Digite o raio da base do cilindro: ";
    cin >> raio;
    cout << "Digite a altura do cilindro: ";
    cin >> altura;

    // Cálculo
    volume = M_PI * pow(raio, 2) * altura;

    // Saída
    cout << "O volume do cilindro é: " << volume << " unidades cúbicas." << endl;

    return 0;
}
