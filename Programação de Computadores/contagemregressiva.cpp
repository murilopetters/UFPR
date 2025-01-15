#include <iostream>
using namespace std;

int main() {
    int n;

    // Entrada do usuário
    cout << "Digite um número para iniciar a contagem regressiva: ";
    cin >> n;

    // Contagem regressiva
    cout << "Contagem regressiva: ";
    for (int i = n; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
