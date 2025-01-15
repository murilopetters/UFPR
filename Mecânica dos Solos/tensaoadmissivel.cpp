#include <iostream>
using namespace std;

int main() {
    double tensaoUltima, fatorSeguranca, tensaoAdmissivel;

    cout << "Digite a tensão última do solo (em kPa): ";
    cin >> tensaoUltima;
    cout << "Digite o fator de segurança: ";
    cin >> fatorSeguranca;

    tensaoAdmissivel = tensaoUltima / fatorSeguranca;

    cout << "A tensão admissível do solo é: " << tensaoAdmissivel << " kPa." << endl;

    return 0;
}
