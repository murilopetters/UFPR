#include <iostream>
using namespace std;

int main() {
    int inicio, fim, soma = 0;

    // Entrada do usuário
    cout << "Digite o início do intervalo: ";
    cin >> inicio;
    cout << "Digite o fim do intervalo: ";
    cin >> fim;

    // Soma de números pares
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    // Saída
    cout << "A soma dos números pares no intervalo é: " << soma << endl;

    return 0;
}
