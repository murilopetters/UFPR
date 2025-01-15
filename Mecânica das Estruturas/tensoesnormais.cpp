#include <iostream>
using namespace std;

int main() {
    double forca, area, tensao;

    cout << "Digite a força axial aplicada (em N): ";
    cin >> forca;
    cout << "Digite a área da seção transversal (em cm²): ";
    cin >> area;

    tensao = forca / (area * 100); // Convertendo para m²

    cout << "A tensão normal é: " << tensao << " N/m²." << endl;

    return 0;
}
