#include <iostream>
#include <cmath> // Para M_PI
using namespace std;

int main() {
    double raio, perimetro;

    // Entrada do usuário
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // Cálculo
    perimetro = 2 * M_PI * raio;

    // Saída
    cout << "O perímetro do círculo é: " << perimetro << " unidades." << endl;

    return 0;
}
