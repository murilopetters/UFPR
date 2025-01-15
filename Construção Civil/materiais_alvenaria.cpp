#include <iostream>
using namespace std;

int main() {
    double comprimento, altura, espessura, volumeParede, volumeBloco, argamassaPorM3;

    // Entrada do usuário
    cout << "Digite o comprimento da parede (em metros): ";
    cin >> comprimento;
    cout << "Digite a altura da parede (em metros): ";
    cin >> altura;
    cout << "Digite a espessura da parede (em metros): ";
    cin >> espessura;
    cout << "Digite o volume de um bloco (em m³): ";
    cin >> volumeBloco;
    cout << "Digite o volume de argamassa necessário por m³ de parede: ";
    cin >> argamassaPorM3;

    // Cálculos
    volumeParede = comprimento * altura * espessura;
    int blocosNecessarios = volumeParede / volumeBloco;
    double argamassaNecessaria = volumeParede * argamassaPorM3;

    // Saída
    cout << "Quantidade de blocos necessários: " << blocosNecessarios << endl;
    cout << "Quantidade de argamassa necessária: " << argamassaNecessaria << " m³" << endl;

    return 0;
}