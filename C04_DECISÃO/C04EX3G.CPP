// PROGRAMA C04EX3G.CPP

/* Fazer a leitura de quatro valores numericos inteiros representados
pelas variaveis A, B, C e D. Apresentar apenas os valores que sejam divisiveis por 2 e 3.*/

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, d, resultado;

    cout << "=== VALORES DIVISIVEIS POR 2 E 3 ===" << endl << endl;

    cout << "Informe valor para <A>...: ";
    cin >> a;
    cin.ignore(80, '\n');

    cout << "Informe valor para <B>...: ";
    cin >> b;
    cin.ignore(80, '\n');

    cout << "Informe valor para <C>...: ";
    cin >> c;
    cin.ignore(80, '\n');

    cout << "Informe valor para <D>...: ";
    cin >> d;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Numeros divisiveis por 2 e 3: " << endl << endl;
    if (a % 2 == 0 and a % 3 == 0)
        cout << "A = " << a << endl;

    if (b % 2 == 0 and b % 3 == 0)
        cout << "B = " << b << endl;

    if (c % 2 == 0 and c % 3 == 0)
        cout << "C = " << c << endl;

    if (d % 2 == 0 and d % 3 == 0)
        cout << "D = " << d << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
