#include <iostream>
using namespace std;

int main() {
    double peso, altura, imc;

    // Entrada do usuário
    cout << "Digite seu peso (em kg): ";
    cin >> peso;
    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    // Cálculo
    imc = peso / (altura * altura);

    // Saída
    cout << "Seu IMC é: " << imc << endl;

    return 0;
}