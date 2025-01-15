#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, media;

    // Entrada do usuário
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    // Cálculo
    media = (nota1 + nota2 + nota3) / 3;

    // Saída
    cout << "A média das notas é: " << media << endl;

    return 0;
}