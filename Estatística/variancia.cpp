#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    vector<double> numeros;
    double soma = 0, media, variancia = 0;

    // Entrada do número de elementos
    cout << "Digite a quantidade de números: ";
    cin >> n;

    // Entrada dos números e cálculo da soma
    for (int i = 0; i < n; i++) {
        double valor;
        cout << "Digite o número " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
        soma += valor;
    }

    // Cálculo da média
    media = soma / n;

    // Cálculo da variância
    for (double valor : numeros) {
        variancia += pow(valor - media, 2);
    }
    variancia /= n;

    // Saída
    cout << "A variância é: " << variancia << endl;

    return 0;
}
