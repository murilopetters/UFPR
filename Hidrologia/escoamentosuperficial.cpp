#include <iostream>
using namespace std;

int main() {
    double coeficiente, intensidade, area, escoamento;

    // Entrada do usuário
    cout << "Digite o coeficiente de escoamento (C): ";
    cin >> coeficiente;
    cout << "Digite a intensidade da precipitação (em mm/h): ";
    cin >> intensidade;
    cout << "Digite a área da bacia (em hectares): ";
    cin >> area;

    // Cálculo
    escoamento = coeficiente * intensidade * area * 0.00278; // Conversão para m³/s

    // Saída
    cout << "O escoamento superficial é: " << escoamento << " m³/s." << endl;

    return 0;
}
