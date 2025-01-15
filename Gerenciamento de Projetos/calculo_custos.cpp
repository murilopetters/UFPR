#include <iostream>
using namespace std;

int main() {
    int numFases;
    double custo, custoTotal = 0;

    cout << "Digite o número de fases do projeto: ";
    cin >> numFases;

    for (int i = 1; i <= numFases; i++) {
        cout << "Digite o custo da fase " << i << " (em reais): ";
        cin >> custo;
        custoTotal += custo;
    }

    cout << "O custo total do projeto é: R$ " << custoTotal << endl;

    return 0;
}
