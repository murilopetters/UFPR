#include <iostream>
using namespace std;

int main() {
    int numResistores;
    char tipo;
    double resistencia, resistenciaEquivalente = 0;

    // Escolha do tipo de associação
    cout << "Digite o tipo de associação (s para série, p para paralelo): ";
    cin >> tipo;

    // Entrada do número de resistores
    cout << "Digite o número de resistores: ";
    cin >> numResistores;

    // Entrada e cálculo da resistência equivalente
    for (int i = 1; i <= numResistores; i++) {
        cout << "Digite o valor da resistência " << i << " (em ohms): ";
        cin >> resistencia;

        if (tipo == 's' || tipo == 'S') {
            resistenciaEquivalente += resistencia;
        } else if (tipo == 'p' || tipo == 'P') {
            resistenciaEquivalente += 1 / resistencia;
        }
    }

    if (tipo == 'p' || tipo == 'P') {
        resistenciaEquivalente = 1 / resistenciaEquivalente;
    }

    // Saída
    cout << "A resistência equivalente é: " << resistenciaEquivalente << " ohms." << endl;

    return 0;
}
