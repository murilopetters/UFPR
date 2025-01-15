#include <iostream>
using namespace std;

int main() {
    double altura, densidade, pressao;

    // Entrada do usuário
    cout << "Digite a altura do ponto (em metros): ";
    cin >> altura;
    cout << "Digite a densidade do fluido (em kg/m³): ";
    cin >> densidade;

    // Cálculo
    pressao = densidade * 9.81 * altura;

    // Saída
    cout << "A pressão no ponto é: " << pressao << " pascals." << endl;

    return 0;
}

