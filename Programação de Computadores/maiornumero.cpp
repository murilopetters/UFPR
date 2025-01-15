#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, maior;

    // Entrada do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    // Verificação do maior número
    maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    // Saída
    cout << "O maior número é: " << maior << endl;

    return 0;
}