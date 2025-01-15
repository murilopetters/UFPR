#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distanciaHorizontal, inclinacao, distanciaCorrigida;

    cout << "Digite a distância horizontal medida (em metros): ";
    cin >> distanciaHorizontal;
    cout << "Digite a inclinação (em graus): ";
    cin >> inclinacao;

    distanciaCorrigida = distanciaHorizontal / cos(inclinacao * M_PI / 180);

    cout << "A distância corrigida é: " << distanciaCorrigida << " metros." << endl;

    return 0;
}
