#include <iostream>
using namespace std;

int main() {
    int numTarefas, duracao, duracaoTotal = 0;

    cout << "Digite o número de tarefas no projeto: ";
    cin >> numTarefas;

    for (int i = 1; i <= numTarefas; i++) {
        cout << "Digite a duração da tarefa " << i << " (em dias): ";
        cin >> duracao;
        duracaoTotal += duracao;
    }

    cout << "A duração total do projeto é: " << duracaoTotal << " dias." << endl;

    return 0;
}
