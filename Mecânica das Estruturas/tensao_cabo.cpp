#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double peso, comprimento, flecha, tensao;

    cout << "Digite o peso do cabo (em N): ";
    cin >> peso;
    cout << "Digite o comprimento do cabo (em metros): ";
    cin >> comprimento;
    cout << "Digite a flecha do cabo (em metros): ";
    cin >> flecha;

    tensao = (peso * comprimento) / (8 * flecha);

    cout << "A tensão no cabo é: " << tensao << " N." << endl;

    return 0;
}
