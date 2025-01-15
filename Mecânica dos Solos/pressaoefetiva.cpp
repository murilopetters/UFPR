#include <iostream>
using namespace std;

int main() {
    double tensaoTotal, poropressao, pressaoEfetiva;

    cout << "Digite a tensão total (em kPa): ";
    cin >> tensaoTotal;
    cout << "Digite a poropressão (em kPa): ";
    cin >> poropressao;

    pressaoEfetiva = tensaoTotal - poropressao;

    cout << "A pressão efetiva no solo é: " << pressaoEfetiva << " kPa." << endl;

    return 0;
}
