#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, azimute;

    cout << "Digite as coordenadas do primeiro ponto (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Digite as coordenadas do segundo ponto (x2 y2): ";
    cin >> x2 >> y2;

    azimute = atan2(y2 - y1, x2 - x1) * 180 / M_PI; // Conversão para graus
    if (azimute < 0) azimute += 360;

    cout << "O azimute entre os pontos é: " << azimute << " graus." << endl;

    return 0;
}
