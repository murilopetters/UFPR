#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    map<int, int> frequencias;
    int moda, maxFreq = 0;

    // Entrada do número de elementos
    cout << "Digite a quantidade de números: ";
    cin >> n;

    // Entrada dos números e cálculo da frequência
    for (int i = 0; i < n; i++) {
        int valor;
        cout << "Digite o número " << i + 1 << ": ";
        cin >> valor;
        frequencias[valor]++;
        if (frequencias[valor] > maxFreq) {
            maxFreq = frequencias[valor];
            moda = valor;
        }
    }

    // Saída
    cout << "A moda é: " << moda << endl;

    return 0;
}
