#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double densidade, altura, coefAtivo, empuxo;

    cout << "Digite a densidade do solo (em kN/m³): ";
    cin >> densidade;
    cout << "Digite a altura do muro (em metros): ";
    cin >> altura;
    cout << "Digite o coeficiente de empuxo ativo (Ka): ";
    cin >> coefAtivo;

    empuxo = 0.5 * densidade * coefAtivo * pow(altura, 2);

    cout << "O empuxo de terra é: " << empuxo << " kN/m." << endl;

    return 0;
}
