// PROGRAMA C05EX1A_WHILE.CPP

/* Elaborar um programa que apresente como resultado os quadrados armazenados na memoria dos numeros inteiros existentes na faixa
de valores de 15 a 200.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t resultado, i = 15;

    cout << "=== OS QUADRADOS ENTRE 15 A 200 ===" << endl << endl;

    while (i >= 15 and i<= 200)
    {
        resultado = pow(i, 2);
        cout << "Quadrado de " << i << " = " << resultado << endl << endl;
        ++i;
    }

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
