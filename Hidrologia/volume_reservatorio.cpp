#include <iostream>
using namespace std;

int main() {
    double vazaoEntrada, vazaoSaida, duracao, volume;

    cout << "Digite a vazão de entrada no reservatório (em m³/s): ";
    cin >> vazaoEntrada;
    cout << "Digite a vazão de saída do reservatório (em m³/s): ";
    cin >> vazaoSaida;
    cout << "Digite a duração da chuva (em horas): ";
    cin >> duracao;

    volume = (vazaoEntrada - vazaoSaida) * duracao * 3600;

    cout << "O volume necessário para armazenamento é: " << volume << " m³." << endl;

    return 0;
}
