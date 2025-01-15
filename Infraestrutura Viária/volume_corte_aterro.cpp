#include <iostream>
using namespace std;

int main() {
    double areaCorte, areaAterro, comprimento, volumeCorte, volumeAterro;

    // Entrada do usuário
    cout << "Digite a área de corte (em m²): ";
    cin >> areaCorte;
    cout << "Digite a área de aterro (em m²): ";
    cin >> areaAterro;
    cout << "Digite o comprimento do trecho (em metros): ";
    cin >> comprimento;

    // Cálculo
    volumeCorte = areaCorte * comprimento;
    volumeAterro = areaAterro * comprimento;

    // Saída
    cout << "O volume de corte é: " << volumeCorte << " m³." << endl;
    cout << "O volume de aterro é: " << volumeAterro << " m³." << endl;

    return 0;
}
