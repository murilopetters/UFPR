#include <iostream>
using namespace std;

int main() {
    int n;
    double somaAngulos, erroFechamento;

    cout << "Digite o número de lados do polígono: ";
    cin >> n;
    cout << "Digite a soma dos ângulos medidos (em graus): ";
    cin >> somaAngulos;

    erroFechamento = somaAngulos - (n - 2) * 180;

    cout << "O erro de fechamento angular é: " << erroFechamento << " graus." << endl;

    return 0;
}
