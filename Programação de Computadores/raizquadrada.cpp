#include <iostream>
#include <cmath> // Para usar a função sqrt()
using namespace std;

int main() {
    double numero, raiz;

    // Entrada do usuário
    cout << "Digite um número positivo: ";
    cin >> numero;

    if (numero >= 0) {
        // Cálculo
        raiz = sqrt(numero);

        // Saída
        cout << "A raiz quadrada de " << numero << " é: " << raiz << endl;
    } else {
        cout << "Número inválido! Por favor, insira um número positivo." << endl;
    }

    return 0;
}