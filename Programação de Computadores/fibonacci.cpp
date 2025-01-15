#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, proxTermo;

    // Entrada do usuário
    cout << "Digite o número de termos para a sequência de Fibonacci: ";
    cin >> n;

    // Exibição da sequência
    cout << "Sequência de Fibonacci: " << t1 << ", " << t2;
    for (int i = 3; i <= n; i++) {
        proxTermo = t1 + t2;
        cout << ", " << proxTermo;
        t1 = t2;
        t2 = proxTermo;
    }
    cout << endl;

    return 0;
}