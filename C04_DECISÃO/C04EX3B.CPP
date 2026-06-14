// PROGRAMA C04EX3B.CPP

/* Efetuar a leitura de um valor numerico inteiro positivo ou negativo representado pela variavel N e
apresentar o valor lido como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser multiplicado
por -1.*/

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    int16_t n, positivo;

    cout << "=== CONVERSOR DE NUMEROS NEGATIVOS ===" << endl << endl;

    cout << "Informe um valor qualquer (positivo ou negativo)...: "; cin >> n;
    cout << endl;
    cin.ignore(80, '\n');

    if (n < 0)
        n = n * -1;

    cout << "Valor positivo = " << n << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
