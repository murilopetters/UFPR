#include <iostream>
using namespace std;

int main() {
    double custoMateriais, custoMaoDeObra, custoEquipamentos, areaConstruida;

    // Entrada do usuário
    cout << "Digite o custo total de materiais (em reais): ";
    cin >> custoMateriais;
    cout << "Digite o custo total da mão de obra (em reais): ";
    cin >> custoMaoDeObra;
    cout << "Digite o custo total de equipamentos (em reais): ";
    cin >> custoEquipamentos;
    cout << "Digite a área construída (em m²): ";
    cin >> areaConstruida;

    // Cálculo
    double custoPorM2 = (custoMateriais + custoMaoDeObra + custoEquipamentos) / areaConstruida;

    // Saída
    cout << "O custo total por metro quadrado é: R$ " << custoPorM2 << endl;

    return 0;
}
