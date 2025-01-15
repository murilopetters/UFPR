#include <iostream>
using namespace std;

int main() {
    double totalAtividades, atividadesConcluidas;

    cout << "Digite o número total de atividades do projeto: ";
    cin >> totalAtividades;
    cout << "Digite o número de atividades concluídas: ";
    cin >> atividadesConcluidas;

    double progresso = (atividadesConcluidas / totalAtividades) * 100;

    cout << "O progresso do projeto é: " << progresso << "%" << endl;

    return 0;
}
