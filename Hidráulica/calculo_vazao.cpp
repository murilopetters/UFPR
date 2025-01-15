#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double area, velocidade, vazao;

    // Entrada do usuário
    cout << "Digite a área da seção transversal da tubulação (em m²): ";
    cin >> area;
    cout << "Digite a velocidade do fluido (em m/s): ";
    cin >> velocidade;

    // Cálculo
    vazao = area * velocidade;

    // Saída
    cout << "A vazão na tubulação é: " << vazao << " m³/s." << endl;

    return 0;
}
