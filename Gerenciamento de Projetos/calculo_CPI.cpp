#include <iostream>
using namespace std;

int main() {
    double valorAgregado, custoReal;

    cout << "Digite o valor agregado (Earned Value): ";
    cin >> valorAgregado;
    cout << "Digite o custo real (Actual Cost): ";
    cin >> custoReal;

    double CPI = valorAgregado / custoReal;

    cout << "O índice de desempenho de custo (CPI) é: " << CPI << endl;

    return 0;
}
