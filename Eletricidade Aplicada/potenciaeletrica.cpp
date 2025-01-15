#include <iostream>
using namespace std;

int main() {
    double tensao, corrente, potencia;

    // Entrada do usuário
    cout << "Digite a tensão (em volts): ";
    cin >> tensao;
    cout << "Digite a corrente elétrica (em amperes): ";
    cin >> corrente;

    // Cálculo
    potencia = tensao * corrente;

    // Saída
    cout << "A potência elétrica do circuito é: " << potencia << " watts." << endl;

    return 0;
}
