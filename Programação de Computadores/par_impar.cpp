#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada do usuário
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verificação
    if (numero % 2 == 0) {
        cout << "O número " << numero << " é par." << endl;
    } else {
        cout << "O número " << numero << " é ímpar." << endl;
    }

    return 0;
}