#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double somaDesviosX, somaDesviosY, erroFechamento;

    cout << "Digite a soma dos desvios em X (em metros): ";
    cin >> somaDesviosX;
    cout << "Digite a soma dos desvios em Y (em metros): ";
    cin >> somaDesviosY;

    erroFechamento = sqrt(pow(somaDesviosX, 2) + pow(somaDesviosY, 2));

    cout << "O erro de fechamento linear é: " << erroFechamento << " metros." << endl;

    return 0;
}
