// PROGRAMA C04EX3F.CPP

/* Ler tres valores inteiros representados pelas variaveis A, B, e C e apresentar os valores lidos dispostos
em ordem crescente. Dica: utilizar tomada de decisao sequencial e as ideias trabalhadas nos exercicios "g"
(propriedade distributiva) e "f" (troca de valores) do capitulo 03.*/

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, x;

    cout << "=== ORGANIZACAO DE VALORES EM ORDEM CRESCENTE ===" << endl << endl;

    cout << "Informe valor para <A>...: ";
    cin >> a;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe valor para <B>...: ";
    cin >> b;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe valor para <C>...: ";
    cin >> c;
    cin.ignore(80, '\n');
    cout << endl;

    if (a > b) {
        x = a;
        a = b;
        b = x;
    }
    if (a > c) {
        x = a;
        a = c;
        c = x;
    }
    if (b > c){
        x = b;
        b = c;
        c = x;
    }

    cout << endl << endl;
    cout << "Valores em ordem crescente:" << endl << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
