// PROGRMA C04EX3A.CPP

// Efetuar a leitura de dois valores inteiros representados pelas variaveis A e B e apresentar o resultado da diferenca do maior pelo menor valor.

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    int16_t a, b, resultado;

    cout << "=== SUBTRACAO DO MAIOR PELO MENOR ===" << endl << endl;

    cout << "Informe valor para <A>...: "; cin >> a;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe valor para <B>...: "; cin >> b;
    cout << endl;
    cin.ignore(80, '\n');

    if (a > b)
        resultado = a - b;
    else
        resultado = b - a;

    cout << "Resultado = " << resultado << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
