#include <iostream>
#include <cmath> // Para M_PI
using namespace std;

int main() {
    double raio, volume;

    // Entrada do usuário
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    // Cálculo
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    // Saída
    cout << "O volume da esfera é: " << volume << " unidades cúbicas." << endl;

    return 0;
}
