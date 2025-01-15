#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Entrada do usuário
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    // Cálculo
    fahrenheit = (celsius * 9 / 5) + 32;

    // Saída
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F" << endl;

    return 0;
}