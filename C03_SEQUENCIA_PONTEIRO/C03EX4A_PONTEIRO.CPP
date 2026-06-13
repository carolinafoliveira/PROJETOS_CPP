// PROGRAMA C03EX4A_PONTEIRO.CPP

/* ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
A fórmula de conversao é F = C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. COM PONTEIRO.*/

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    float f, c;
    float *pf = nullptr;
    float *pc = nullptr;
    pf = &f;
    pc = &c;

    cout << "=== CONVERSOR DE TEMPERATURA ===" << endl;
    cout << "Informe a temperatura em graus Celsius: "; cin >> *pc;
    cin.ignore(80, '\n');
    cout << endl;

    *pf = *pc * 9 / 5 + 32;

    cout << "Temperatura em graus Fahrenheit: " << *pf << endl << endl;

    cout << "A variavel Celsius esta armazenada no endereco de memoria " << &c << endl;
    cout << "A variavel Fahrenheit esta armazenada no endereco de memoria " << &f << endl;
    cout << "A variavel ponteiro Celsius esta armazenada no endereco de memoria " << &pc << endl;
    cout << "A variavel ponteiro Fahrenheit esta armazenada no endereco de memoria " << &pf << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
