#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, expoente, resultado;

    // Entrada do usuário
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    // Cálculo
    resultado = pow(base, expoente);

    // Saída
    cout << base << " elevado a " << expoente << " é: " << resultado << endl;

    return 0;
}
