#include <iostream>
using namespace std;

int main() {
    double volumeConcreto, precoConcreto, pesoAco, precoAco, custoMaoDeObra;

    // Entrada do usuário
    cout << "Digite o volume de concreto (em m³): ";
    cin >> volumeConcreto;
    cout << "Digite o preço do concreto por m³: ";
    cin >> precoConcreto;
    cout << "Digite o peso do aço (em kg): ";
    cin >> pesoAco;
    cout << "Digite o preço do aço por kg: ";
    cin >> precoAco;
    cout << "Digite o custo da mão de obra: ";
    cin >> custoMaoDeObra;

    // Cálculo
    double custoTotal = (volumeConcreto * precoConcreto) + (pesoAco * precoAco) + custoMaoDeObra;

    // Saída
    cout << "O custo total do concreto armado é: R$ " << custoTotal << endl;

    return 0;
}
