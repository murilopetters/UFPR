#include <iostream>
using namespace std;

int main() {
    double capacidadeCaminhao, viagensPorTurno, volumeTotal;

    // Entrada do usuário
    cout << "Digite a capacidade do caminhão (em m³): ";
    cin >> capacidadeCaminhao;
    cout << "Digite o número de viagens realizadas por turno: ";
    cin >> viagensPorTurno;

    // Cálculo
    volumeTotal = capacidadeCaminhao * viagensPorTurno;

    // Saída
    cout << "O volume total transportado é: " << volumeTotal << " m³ por turno." << endl;

    return 0;
}
