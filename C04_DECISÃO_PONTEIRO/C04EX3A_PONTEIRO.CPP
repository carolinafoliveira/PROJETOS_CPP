// PROGRMA C04EX3A.CPP

/* Efetuar a leitura de dois valores inteiros representados pelas variaveis A e B e apresentar o
resultado da diferenca do maior pelo menor valor. COM PONTEIRO. */

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    int16_t a, *p_a = &a;
    int16_t b, *p_b = &b;
    int16_t resultado, *presultado = &resultado;

    cout << "=== SUBTRACAO DO MAIOR PELO MENOR ===" << endl << endl;

    cout << "Informe valor para <A>...: "; cin >> *p_a;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe valor para <B>...: "; cin >> *p_b;
    cout << endl;
    cin.ignore(80, '\n');

    if (a > b)
        *presultado = *p_a - *p_b;
    else
        *presultado = *p_b - *p_a;

    cout << "Resultado = " << *presultado << endl << endl;

    cout << "A variavel <A> esta armazenada no endereco de memoria " << &a << endl;
    cout << "A variavel <B> esta armazenada no endereco de memoria " << &b << endl;
    cout << "A variavel <RESULTADO> esta armazenada no endereco de memoria " << &resultado << endl;
    cout << "A variavel ponteiro <A> esta armazenada no endereco de memoria " << &p_a << endl;
    cout << "A variavel ponteiro <B> esta armazenada no endereco de memoria " << &p_b << endl;
    cout << "A variavel ponteiro <RESULTADO> esta armazenada no endereco de memoria " << &presultado << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
