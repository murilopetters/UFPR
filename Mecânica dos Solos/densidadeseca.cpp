#include <iostream>
using namespace std;

int main() {
    double pesoEspecifico, umidade, densidadeSeca;

    cout << "Digite o peso específico do solo (em kN/m³): ";
    cin >> pesoEspecifico;
    cout << "Digite a umidade do solo (em decimal): ";
    cin >> umidade;

    densidadeSeca = pesoEspecifico / (1 + umidade);

    cout << "A densidade seca do solo é: " << densidadeSeca << " kN/m³." << endl;

    return 0;
}
