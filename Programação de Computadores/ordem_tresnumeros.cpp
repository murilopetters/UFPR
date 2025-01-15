#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Entrada do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    // Ordenação usando comparações simples
    if (num1 > num2) swap(num1, num2);
    if (num1 > num3) swap(num1, num3);
    if (num2 > num3) swap(num2, num3);

    // Saída
    cout << "Números em ordem crescente: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
