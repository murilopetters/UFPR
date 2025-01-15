#include <iostream>
using namespace std;

int main() {
    int numero;
    bool isPrimo = true;

    // Entrada do usuário
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificação de número primo
    if (numero <= 1) {
        isPrimo = false;
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                isPrimo = false;
                break;
            }
        }
    }

    // Saída
    if (isPrimo) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
