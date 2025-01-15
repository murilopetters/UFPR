#include <iostream>
using namespace std;

int main() {
    double area, tensaoAdmissivel, cargaMaxima;

    // Entrada do usuário
    cout << "Digite a área da seção transversal da barra (em cm²): ";
    cin >> area;
    cout << "Digite a tensão admissível do material (em MPa): ";
    cin >> tensaoAdmissivel;

    // Cálculo
    cargaMaxima = area * tensaoAdmissivel * 10; // Conversão MPa para N/cm²

    // Saída
    cout << "A carga máxima suportada pela barra é: " << cargaMaxima << " N." << endl;

    return 0;
}
