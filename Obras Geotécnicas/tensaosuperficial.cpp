#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double carga, profundidade, raio, tensao;

    cout << "Digite a carga aplicada (em kN): ";
    cin >> carga;
    cout << "Digite a profundidade do ponto considerado (em metros): ";
    cin >> profundidade;
    cout << "Digite o raio do círculo de influência (em metros): ";
    cin >> raio;

    tensao = (3 * carga) / (2 * M_PI * pow(profundidade, 2) * pow((1 + pow((raio / profundidade), 2)), 2.5));

    cout << "A tensão no subsolo é: " << tensao << " kPa." << endl;

    return 0;
}
