#include <iostream>
using namespace std;

int main() {
    double densidadeSeca, densidadeMinima, densidadeMaxima, compacidade;

    cout << "Digite a densidade seca do solo (em g/cm³): ";
    cin >> densidadeSeca;
    cout << "Digite a densidade mínima do solo (em g/cm³): ";
    cin >> densidadeMinima;
    cout << "Digite a densidade máxima do solo (em g/cm³): ";
    cin >> densidadeMaxima;

    compacidade = (densidadeSeca - densidadeMinima) / (densidadeMaxima - densidadeMinima);

    cout << "A compacidade relativa é: " << compacidade * 100 << "%" << endl;

    return 0;
}
