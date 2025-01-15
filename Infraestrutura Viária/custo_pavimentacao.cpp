#include <iostream>
using namespace std;

int main() {
    double area, custoM2, custoTotal;

    // Entrada do usuário
    cout << "Digite a área a ser pavimentada (em m²): ";
    cin >> area;
    cout << "Digite o custo por metro quadrado (em reais): ";
    cin >> custoM2;

    // Cálculo
    custoTotal = area * custoM2;

    // Saída
    cout << "O custo total da pavimentação é: R$ " << custoTotal << endl;

    return 0;
}
