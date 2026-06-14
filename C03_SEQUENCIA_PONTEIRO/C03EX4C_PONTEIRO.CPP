// PROGRAMA C03EX4C.CPP

// Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula VOLUME = 3.14159 * R^2 * ALTURA. COM PONTEIRO.

#include <iostream>
#include <cstdint>
#include <cmath> // biblioteca para operacoes com exponenciacao e radiciacao
#include <iomanip> // biblioteca para formatacao de numero decimal

using namespace std;

int main(void)
{
    float volume, raio, altura;
    float *pvolume = &volume;
    float *praio = &raio;
    float *paltura = &altura;

    cout << setprecision(2) << fixed << right;

    cout << "=== CALCULO DE VOLUME ===" << endl << endl;

    cout << "Informe valor do <RAIO>....: "; cin >> *praio;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe valor da <ALTURA>..: "; cin >> *paltura;
    cin.ignore(80, '\n');
    cout << endl;

    *pvolume = 3.14159 * pow(*praio, 2) * *paltura;

    cout << "Resultado do <VOLUME>......: " << setw(8) << *pvolume << endl << endl;

    cout << "A variavel <RAIO> esta armazenada no endereco de memoria " << &raio << endl;
    cout << "A variavel <ALTURA> esta armazenada no endereco de memoria " << &altura << endl;
    cout << "A variavel <VOLUME> esta armazenada no endereco de memoria " << &volume << endl;
    cout << "A variavel ponteiro <RAIO> esta armazenada no endereco de memoria " << &praio << endl;
    cout << "A variavel ponteiro <ALTURA> esta armazenada no endereco de memoria " << &paltura << endl;
    cout << "A variavel ponteiro <VOLUME> esta armazenada no endereco de memoria " << &pvolume << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
