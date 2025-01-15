#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    // Entrada do usuário
    cout << "Digite a base do triângulo: ";
    cin >> base;
    cout << "Digite a altura do triângulo: ";
    cin >> altura;

    // Cálculo
    area = (base * altura) / 2;

    // Saída
    cout << "A área do triângulo é: " << area << " unidades quadradas." << endl;

    return 0;
}
