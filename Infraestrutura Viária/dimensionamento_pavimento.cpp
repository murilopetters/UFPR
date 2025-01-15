#include <iostream>
using namespace std;

int main() {
    double cbrSubleito, moduloResiliente, espessuraBase, espessuraRevestimento;

    // Entrada do usuário
    cout << "Digite o valor do CBR do subleito (%): ";
    cin >> cbrSubleito;
    cout << "Digite o módulo resiliente da base (em MPa): ";
    cin >> moduloResiliente;

    // Cálculo
    espessuraBase = 100 / cbrSubleito;
    espessuraRevestimento = 50 / moduloResiliente;

    // Saída
    cout << "Espessura da base: " << espessuraBase << " cm." << endl;
    cout << "Espessura do revestimento: " << espessuraRevestimento << " cm." << endl;

    return 0;
}
