// PROGRAMA C03EX4B_PONTEIRO.CPP

/* ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
A fórmula de conversao é C = ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. COM PONTEIRO*/

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    float c, f;
    float *pc = &c;
    float *pf = &f;

    cout << "=== CONVERSOR DE TEMPERATURA ===" << endl;
    cout << "Informe a temperatura em graus Fahrenheit: "; cin >> *pf;
    cin.ignore(80, '\n');
    cout << endl;

    c = ((f - 32) * 5) / 9;

    cout << "Temperatura em graus Celsius: " << *pc << endl << endl;

    cout << "A variavel Celsius esta armazenada no endereco de memoria " << &c << endl;
    cout << "A variavel Fahrenheit esta armazenada no endereco de memoria " << &f << endl;
    cout << "A variavel ponteiro Celsius esta armazenada no endereco de memoria " << &pc << endl;
    cout << "A variavel ponteiro Fahrenheit esta armazenada no endereco de memoria " << &pf << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
