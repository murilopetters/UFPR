#include <iostream>
using namespace std;

int main() {
    double densidade, altura, pressao;

    cout << "Digite a densidade do fluido (em kg/m³): ";
    cin >> densidade;
    cout << "Digite a altura da coluna de fluido (em metros): ";
    cin >> altura;

    pressao = densidade * 9.81 * altura;

    cout << "A pressão no ponto é: " << pressao << " Pa." << endl;

    return 0;
}
