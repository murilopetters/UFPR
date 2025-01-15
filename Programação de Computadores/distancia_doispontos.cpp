#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distancia;

    // Entrada do usuário
    cout << "Digite as coordenadas do primeiro ponto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Digite as coordenadas do segundo ponto (x2, y2): ";
    cin >> x2 >> y2;

    // Cálculo
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Saída
    cout << "A distância entre os dois pontos é: " << distancia << endl;

    return 0;
}
