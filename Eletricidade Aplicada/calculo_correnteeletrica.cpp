#include <iostream>
using namespace std;

int main() {
    double tensao, resistencia, corrente;

    // Entrada do usuário
    cout << "Digite a tensão (em volts): ";
    cin >> tensao;
    cout << "Digite a resistência (em ohms): ";
    cin >> resistencia;

    // Verificação e cálculo
    if (resistencia != 0) {
        corrente = tensao / resistencia;
        cout << "A corrente elétrica é: " << corrente << " amperes." << endl;
    } else {
        cout << "Erro: A resistência não pode ser zero." << endl;
    }

    return 0;
}
