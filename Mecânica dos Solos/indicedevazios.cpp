#include <iostream>
using namespace std;

int main() {
    double volumeS, volumeV, indiceVazios;

    cout << "Digite o volume de sólidos (em m³): ";
    cin >> volumeS;
    cout << "Digite o volume de vazios (em m³): ";
    cin >> volumeV;

    indiceVazios = volumeV / volumeS;

    cout << "O índice de vazios é: " << indiceVazios << "." << endl;

    return 0;
}
