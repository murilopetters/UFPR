#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, menor;

    // Entrada do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    // Verificação do menor número
    menor = num1; // Assume que o primeiro número é o menor inicialmente
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Saída
    cout << "O menor número é: " << menor << endl;

    return 0;
}
