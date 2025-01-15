#include <iostream>
using namespace std;

int main() {
    double carga, comprimento, distancia, momentoFletor;

    cout << "Digite a carga concentrada (em N): ";
    cin >> carga;
    cout << "Digite o comprimento da viga (em metros): ";
    cin >> comprimento;
    cout << "Digite a distância da carga ao apoio esquerdo (em metros): ";
    cin >> distancia;

    momentoFletor = carga * distancia * (comprimento - distancia) / comprimento;

    cout << "O momento fletor máximo é: " << momentoFletor << " Nm." << endl;

    return 0;
}
