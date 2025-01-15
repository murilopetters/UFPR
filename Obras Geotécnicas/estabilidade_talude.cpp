#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double coesao, pesoEspecifico, anguloTalude, anguloFriccao, altura, fatorSeguranca;

    cout << "Digite a coesão do solo (em kPa): ";
    cin >> coesao;
    cout << "Digite o peso específico do solo (em kN/m³): ";
    cin >> pesoEspecifico;
    cout << "Digite o ângulo do talude (em graus): ";
    cin >> anguloTalude;
    cout << "Digite o ângulo de atrito do solo (em graus): ";
    cin >> anguloFriccao;
    cout << "Digite a altura do talude (em metros): ";
    cin >> altura;

    fatorSeguranca = (coesao + (pesoEspecifico * altura * tan(anguloFriccao * M_PI / 180))) /
                     (pesoEspecifico * altura * tan(anguloTalude * M_PI / 180));

    cout << "O fator de segurança do talude é: " << fatorSeguranca << endl;

    return 0;
}
