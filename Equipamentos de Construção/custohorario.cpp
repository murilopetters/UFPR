#include <iostream>
using namespace std;

int main() {
    double custoFixo, custoVariavel, horasTrabalhadas, custoHorario;

    // Entrada do usuário
    cout << "Digite o custo fixo mensal do equipamento (em reais): ";
    cin >> custoFixo;
    cout << "Digite o custo variável mensal do equipamento (em reais): ";
    cin >> custoVariavel;
    cout << "Digite o número de horas trabalhadas por mês: ";
    cin >> horasTrabalhadas;

    // Cálculo
    custoHorario = (custoFixo + custoVariavel) / horasTrabalhadas;

    // Saída
    cout << "O custo horário do equipamento é: R$ " << custoHorario << endl;

    return 0;
}
