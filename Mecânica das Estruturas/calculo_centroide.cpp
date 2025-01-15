#include <iostream>
using namespace std;

int main() {
    double base1, altura1, base2, altura2, y1, y2, area1, area2, centroide;

    cout << "Digite a base e altura do primeiro retângulo (em cm): ";
    cin >> base1 >> altura1;
    cout << "Digite a base e altura do segundo retângulo (em cm): ";
    cin >> base2 >> altura2;
    cout << "Digite a posição Y do centro do segundo retângulo (em cm): ";
    cin >> y2;

    y1 = altura1 / 2;
    area1 = base1 * altura1;
    area2 = base2 * altura2;
    centroide = (area1 * y1 + area2 * y2) / (area1 + area2);

    cout << "O centroide da seção composta é: " << centroide << " cm." << endl;

    return 0;
}
