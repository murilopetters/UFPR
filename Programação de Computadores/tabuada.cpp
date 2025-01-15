#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada do usuário
    cout << "Digite um número para gerar a tabuada: ";
    cin >> numero;

    // Exibição da tabuada
    cout << "Tabuada de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}