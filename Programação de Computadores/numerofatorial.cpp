#include <iostream>
using namespace std;

int main() {
    int n, fatorial = 1;

    // Entrada do usuário
    cout << "Digite um número inteiro não negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "Fatorial não definido para números negativos." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        cout << "O fatorial de " << n << " é: " << fatorial << endl;
    }

    return 0;
}
