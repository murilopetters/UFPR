#include <iostream>
using namespace std;

int main() {
    double valorAgregado, valorPlanejado;

    cout << "Digite o valor agregado (Earned Value): ";
    cin >> valorAgregado;
    cout << "Digite o valor planejado (Planned Value): ";
    cin >> valorPlanejado;

    double SPI = valorAgregado / valorPlanejado;

    cout << "O índice de desempenho de prazo (SPI) é: " << SPI << endl;

    return 0;
}
