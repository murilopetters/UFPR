#include <iostream>
using namespace std;

int main() {
    int n;
    double soma = 0, valor;

    // Entrada do número de elementos
    cout << "Digite a quantidade de números: ";
    cin >> n;

    // Entrada dos números e cálculo da soma
    for (int i = 0; i < n; i++) {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> valor;
        soma += valor;
    }

    // Cálculo e saída da média
    cout << "A média aritmética é: " << soma / n << endl;

    return 0;
}
