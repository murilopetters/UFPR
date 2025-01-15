#include <iostream>
using namespace std;

int main() {
    double areaConstruida, consumoCura, consumoArgamassa, consumoLimpeza;

    // Entrada do usuário
    cout << "Digite a área construída (em m²): ";
    cin >> areaConstruida;
    cout << "Digite o consumo de água para cura do concreto (em litros por m²): ";
    cin >> consumoCura;
    cout << "Digite o consumo de água para argamassa (em litros por m²): ";
    cin >> consumoArgamassa;
    cout << "Digite o consumo de água para limpeza (em litros por m²): ";
    cin >> consumoLimpeza;

    // Cálculo
    double consumoTotal = areaConstruida * (consumoCura + consumoArgamassa + consumoLimpeza);

    // Saída
    cout << "O consumo total de água na obra será: " << consumoTotal << " litros." << endl;

    return 0;
}
