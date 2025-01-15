#include <iostream>
using namespace std;

int main() {
    int numAtividades;
    double horasPorAtividade, totalHoras = 0;

    cout << "Digite o número de atividades no projeto: ";
    cin >> numAtividades;

    for (int i = 1; i <= numAtividades; i++) {
        cout << "Digite as horas estimadas para a atividade " << i << ": ";
        cin >> horasPorAtividade;
        totalHoras += horasPorAtividade;
    }

    cout << "O total de horas estimadas para o projeto é: " << totalHoras << " horas." << endl;

    return 0;
}
