#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double vazao, velocidade, diametro;

    // Entrada do usuário
    cout << "Digite a vazão desejada (em m³/s): ";
    cin >> vazao;
    cout << "Digite a velocidade do fluido (em m/s): ";
    cin >> velocidade;

    // Cálculo
    diametro = sqrt((4 * vazao) / (M_PI * velocidade));

    // Saída
    cout << "O diâmetro necessário da tubulação é: " << diametro << " metros." << endl;

    return 0;
}
