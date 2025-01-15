#include <iostream>
using namespace std;

int main() {
    double potencia, tempo, custoKwh, consumo, custoTotal;

    // Entrada do usuário
    cout << "Digite a potência do aparelho (em watts): ";
    cin >> potencia;
    cout << "Digite o tempo de uso diário (em horas): ";
    cin >> tempo;
    cout << "Digite o custo do kWh (em reais): ";
    cin >> custoKwh;

    // Cálculo
    consumo = (potencia / 1000) * tempo * 30; // Consumo mensal
    custoTotal = consumo * custoKwh;

    // Saída
    cout << "O consumo mensal é: " << consumo << " kWh." << endl;
    cout << "O custo mensal será: R$ " << custoTotal << endl;

    return 0;
}
