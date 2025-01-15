#include <iostream>
using namespace std;

int main() {
    double corrente, comprimento, tensao, resistenciaEspecifica, quedaTensao, bitola;

    // Entrada do usuário
    cout << "Digite a corrente elétrica (em amperes): ";
    cin >> corrente;
    cout << "Digite o comprimento do cabo (em metros): ";
    cin >> comprimento;
    cout << "Digite a tensão nominal (em volts): ";
    cin >> tensao;
    cout << "Digite a resistência específica do material do condutor (em ohms por metro): ";
    cin >> resistenciaEspecifica;

    // Cálculo da queda de tensão
    quedaTensao = tensao * 0.05; // 5% da tensão nominal
    bitola = (2 * corrente * comprimento * resistenciaEspecifica) / quedaTensao;

    // Saída
    cout << "A bitola mínima necessária do cabo é: " << bitola << " mm²." << endl;

    return 0;
}
