#include <iostream>
using namespace std;

int main() {
    double largura, altura, area;

    // Entrada do usuário
    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    // Cálculo
    area = largura * altura;

    // Saída
    cout << "A área do retângulo é: " << area << " unidades quadradas." << endl;

    return 0;
}