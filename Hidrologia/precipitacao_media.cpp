#include <iostream>
using namespace std;

int main() {
    int numIsoietas;
    double area, precip, precipMedia = 0, areaTotal = 0;

    cout << "Digite o número de regiões com isoietas: ";
    cin >> numIsoietas;

    for (int i = 1; i <= numIsoietas; i++) {
        cout << "Digite a área da região " << i << " (em km²): ";
        cin >> area;
        cout << "Digite a precipitação média na região " << i << " (em mm): ";
        cin >> precip;
        precipMedia += area * precip;
        areaTotal += area;
    }

    precipMedia /= areaTotal;

    cout << "A precipitação média é: " << precipMedia << " mm." << endl;

    return 0;
}
