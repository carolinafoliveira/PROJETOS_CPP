// PROGRAMA C03EX4C.PP

// Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula VOLUME = 3.14159 * R^2 * ALTURA.

#include <iostream>
#include <cstdint>
#include <cmath> // biblioteca para operacoes com exponenciacao e radiciacao
#include <iomanip> // biblioteca para formatacao de numero decimal

using namespace std;

int main(void)
{
    float volume, raio, altura;

    cout << setprecision(2) << fixed << right;

    cout << "=== CALCULO DE VOLUME ===" << endl << endl;

    cout << "Informe valor do <RAIO>....: "; cin >> raio;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe valor da <ALTURA>..: "; cin >> altura;
    cin.ignore(80, '\n');
    cout << endl;

    volume = 3.14159 * pow(raio, 2) * altura;

    cout << "Resultado do <VOLUME>......: " << setw(8) << volume << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
