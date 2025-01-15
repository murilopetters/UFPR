#include <iostream>
using namespace std;

int main() {
    double capacidadeBalde, ciclosPorHora, producaoHora;

    // Entrada do usuário
    cout << "Digite a capacidade do balde da escavadeira (em m³): ";
    cin >> capacidadeBalde;
    cout << "Digite o número de ciclos por hora: ";
    cin >> ciclosPorHora;

    // Cálculo
    producaoHora = capacidadeBalde * ciclosPorHora;

    // Saída
    cout << "A produção da escavadeira é: " << producaoHora << " m³/hora." << endl;

    return 0;
}
