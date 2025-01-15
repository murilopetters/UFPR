#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, altura, inercia;

    cout << "Digite a base da seção (em cm): ";
    cin >> base;
    cout << "Digite a altura da seção (em cm): ";
    cin >> altura;

    inercia = (base * pow(altura, 3)) / 12;

    cout << "O momento de inércia da seção é: " << inercia << " cm⁴." << endl;

    return 0;
}
