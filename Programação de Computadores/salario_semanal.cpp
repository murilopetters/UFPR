#include <iostream>
using namespace std;

int main() {
    double horas, valorPorHora, salario;

    // Entrada do usuário
    cout << "Digite o número de horas trabalhadas na semana: ";
    cin >> horas;
    cout << "Digite o valor pago por hora: ";
    cin >> valorPorHora;

    // Cálculo
    salario = horas * valorPorHora;

    // Saída
    cout << "O salário semanal é: R$ " << salario << endl;

    return 0;
}