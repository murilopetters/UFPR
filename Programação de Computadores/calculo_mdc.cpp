#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Entrada do usuário
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    // Algoritmo de Euclides
    while (num2 != 0) {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }

    // Saída
    cout << "O MDC dos números é: " << num1 << endl;

    return 0;
}
