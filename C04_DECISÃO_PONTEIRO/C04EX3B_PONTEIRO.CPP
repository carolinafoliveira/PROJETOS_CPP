// PROGRAMA C04EX3B_PONTEIRO.CPP

/* Efetuar a leitura de um valor numerico inteiro positivo ou negativo representado pela variavel N e
apresentar o valor lido como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser multiplicado
por -1. COM PONTEIRO.*/

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    int16_t n, *p_n = &n;

    cout << "=== CONVERSOR DE NUMEROS NEGATIVOS ===" << endl << endl;

    cout << "Informe um valor qualquer (positivo ou negativo)...: "; cin >> *p_n;
    cout << endl;
    cin.ignore(80, '\n');

    if (n < 0)
        n = n * -1;

    cout << "Valor positivo = " << *p_n << endl << endl;

    cout << "A variavel <N> esta armazenada no endereco de memoria " << &n << endl;
    cout << "A variavel ponteiro <N> esta armazenada no endereco de memoria " << &p_n << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
