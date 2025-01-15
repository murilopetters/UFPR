#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacao;

    // Entrada do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Escolha a operação (+, -, *, /): ";
    cin >> operacao;

    // Cálculo e saída
    switch (operacao) {
        case '+':
            cout << "Resultado: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << (num1 / num2) << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
    }

    return 0;
}