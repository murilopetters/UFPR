#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double coefArrasto, area, densidade, velocidade, forcaArrasto;

    cout << "Digite o coeficiente de arrasto: ";
    cin >> coefArrasto;
    cout << "Digite a área de referência (em m²): ";
    cin >> area;
    cout << "Digite a densidade do fluido (em kg/m³): ";
    cin >> densidade;
    cout << "Digite a velocidade do fluido (em m/s): ";
    cin >> velocidade;

    forcaArrasto = 0.5 * coefArrasto * densidade * pow(velocidade, 2) * area;

    cout << "A força de arrasto é: " << forcaArrasto << " N." << endl;

    return 0;
}
