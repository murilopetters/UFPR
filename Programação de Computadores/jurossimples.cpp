#include <iostream>
using namespace std;

int main() {
    double capital, taxa, tempo, juros;

    // Entrada do usuário
    cout << "Digite o capital inicial (em reais): ";
    cin >> capital;
    cout << "Digite a taxa de juros (% ao ano): ";
    cin >> taxa;
    cout << "Digite o tempo (em anos): ";
    cin >> tempo;

    // Cálculo
    juros = (capital * taxa * tempo) / 100;

    // Saída
    cout << "O valor dos juros simples é: R$ " << juros << endl;

    return 0;
}
