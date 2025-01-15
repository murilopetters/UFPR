#include <iostream>
using namespace std;

int main() {
    int ano;

    // Entrada do usuário
    cout << "Digite um ano: ";
    cin >> ano;

    // Verificação
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }

    return 0;
}