#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<double> numeros;

    // Entrada do número de elementos
    cout << "Digite a quantidade de números: ";
    cin >> n;

    // Entrada dos números
    for (int i = 0; i < n; i++) {
        double valor;
        cout << "Digite o número " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    // Ordenação e cálculo da mediana
    sort(numeros.begin(), numeros.end());
    double mediana = (n % 2 == 0) ? (numeros[n / 2 - 1] + numeros[n / 2]) / 2 : numeros[n / 2];

    // Saída
    cout << "A mediana é: " << mediana << endl;

    return 0;
}
