#include <iostream>
using namespace std;

int main() {
    double baseMaior, baseMenor, altura, area;

    // Entrada do usuário
    cout << "Digite a base maior do trapézio: ";
    cin >> baseMaior;
    cout << "Digite a base menor do trapézio: ";
    cin >> baseMenor;
    cout << "Digite a altura do trapézio: ";
    cin >> altura;

    // Cálculo
    area = ((baseMaior + baseMenor) * altura) / 2;

    // Saída
    cout << "A área do trapézio é: " << area << " unidades quadradas." << endl;

    return 0;
}
