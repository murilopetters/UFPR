#include <iostream>
using namespace std;

int main() {
    int n;
    double x[100], y[100], area = 0;

    cout << "Digite o número de vértices do polígono: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite as coordenadas do vértice " << i + 1 << " (x y): ";
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++) {
        area += x[i] * y[(i + 1) % n] - y[i] * x[(i + 1) % n];
    }

    area = abs(area) / 2;

    cout << "A área do polígono é: " << area << " m²." << endl;

    return 0;
}
