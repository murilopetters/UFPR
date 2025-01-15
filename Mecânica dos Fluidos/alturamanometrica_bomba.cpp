#include <iostream>
using namespace std;

int main() {
    double alturaGeometrica, perdaCarga, alturaManometrica;

    cout << "Digite a altura geométrica (em metros): ";
    cin >> alturaGeometrica;
    cout << "Digite a perda de carga (em metros): ";
    cin >> perdaCarga;

    alturaManometrica = alturaGeometrica + perdaCarga;

    cout << "A altura manométrica total é: " << alturaManometrica << " metros." << endl;

    return 0;
}
