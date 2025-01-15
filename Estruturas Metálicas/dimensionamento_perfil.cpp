#include <iostream>
using namespace std;

int main() {
    double momentoFletor, tensaoAdmissivel, alturaPerfil, momentoInercia;

    // Entrada do usuário
    cout << "Digite o momento fletor aplicado (em kNm): ";
    cin >> momentoFletor;
    cout << "Digite a tensão admissível do material (em MPa): ";
    cin >> tensaoAdmissivel;
    cout << "Digite a altura do perfil (em cm): ";
    cin >> alturaPerfil;

    // Cálculo
    momentoFletor *= 100000; // Conversão kNm para Ncm
    tensaoAdmissivel *= 10; // Conversão MPa para N/cm²
    momentoInercia = momentoFletor / (tensaoAdmissivel * (alturaPerfil / 2));

    // Saída
    cout << "O momento de inércia necessário é: " << momentoInercia << " cm⁴." << endl;

    return 0;
}
