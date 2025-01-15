#include <iostream>
#include <vector>
using namespace std;

int main() {
    int decimal;
    vector<int> binario;

    // Entrada do usuário
    cout << "Digite um número decimal: ";
    cin >> decimal;

    // Conversão para binário
    int n = decimal;
    while (n > 0) {
        binario.push_back(n % 2);
        n /= 2;
    }

    // Saída
    cout << "O número binário de " << decimal << " é: ";
    for (int i = binario.size() - 1; i >= 0; i--) {
        cout << binario[i];
    }
    cout << endl;

    return 0;
}
