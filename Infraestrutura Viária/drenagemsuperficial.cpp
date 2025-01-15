#include <iostream>
using namespace std;

int main() {
    double coeficiente, intensidade, larguraPista, vazao;

    // Entrada do usuário
    cout << "Digite o coeficiente de escoamento: ";
    cin >> coeficiente;
    cout << "Digite a intensidade da chuva (em mm/h): ";
    cin >> intensidade;
    cout << "Digite a largura da pista (em metros): ";
    cin >> larguraPista;

    // Cálculo
    vazao = coeficiente * intensidade * larguraPista * 0.00278; // Conversão para m³/s

    // Saída
    cout << "A vazão de drenagem superficial é: " << vazao << " m³/s." << endl;

    return 0;
}
