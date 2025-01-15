#include <iostream>
using namespace std;

int main() {
    double vazao, altura, eficiencia, potencia;

    // Entrada do usuário
    cout << "Digite a vazão da bomba (em m³/s): ";
    cin >> vazao;
    cout << "Digite a altura manométrica (em metros): ";
    cin >> altura;
    cout << "Digite a eficiência da bomba (em %): ";
    cin >> eficiencia;

    // Cálculo
    potencia = (vazao * 1000 * 9.81 * altura) / (eficiencia / 100);

    // Saída
    cout << "A potência necessária da bomba é: " << potencia << " watts." << endl;

    return 0;
}
