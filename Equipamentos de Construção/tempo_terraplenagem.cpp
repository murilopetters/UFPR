#include <iostream>
using namespace std;

int main() {
    double volumeTotal, capacidadeBalde, ciclosPorHora, tempoTotal;

    // Entrada do usuário
    cout << "Digite o volume total de terra a ser escavado (em m³): ";
    cin >> volumeTotal;
    cout << "Digite a capacidade do balde da escavadeira (em m³): ";
    cin >> capacidadeBalde;
    cout << "Digite o número de ciclos por hora: ";
    cin >> ciclosPorHora;

    // Cálculo
    tempoTotal = volumeTotal / (capacidadeBalde * ciclosPorHora);

    // Saída
    cout << "O tempo estimado para escavação é: " << tempoTotal << " horas." << endl;

    return 0;
}
