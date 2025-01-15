#include <iostream>
using namespace std;

int main() {
    int casosFavoraveis, casosTotais;

    // Entrada do usuário
    cout << "Digite o número de casos favoráveis: ";
    cin >> casosFavoraveis;
    cout << "Digite o número total de casos: ";
    cin >> casosTotais;

    // Cálculo e saída
    double probabilidade = static_cast<double>(casosFavoraveis) / casosTotais;
    cout << "A probabilidade é: " << probabilidade * 100 << "%" << endl;

    return 0;
}
