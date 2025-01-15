#include <iostream>
using namespace std;

int main() {
    double areaRevestida, consumoPorM2, desperdicio;

    // Entrada do usuário
    cout << "Digite a área revestida (em m²): ";
    cin >> areaRevestida;
    cout << "Digite o consumo médio de argamassa por m² (em kg): ";
    cin >> consumoPorM2;
    cout << "Digite o percentual de desperdício estimado (%): ";
    cin >> desperdicio;

    // Cálculo
    double argamassaTotal = areaRevestida * consumoPorM2 * (1 + desperdicio / 100);

    // Saída
    cout << "A quantidade total de argamassa necessária é: " << argamassaTotal << " kg." << endl;

    return 0;
}
