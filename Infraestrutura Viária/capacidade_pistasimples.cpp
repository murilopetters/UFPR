#include <iostream>
using namespace std;

int main() {
    double volumeVeiculos, capacidadePista;

    // Entrada do usuário
    cout << "Digite o volume de veículos por hora (em veículos): ";
    cin >> volumeVeiculos;

    // Cálculo
    capacidadePista = 2000 - (volumeVeiculos / 2);

    // Saída
    cout << "A capacidade da pista é: " << capacidadePista << " veículos por hora." << endl;

    return 0;
}
