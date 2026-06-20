// PROGRAMA C04EX3G_PONTEIRO.CPP

/* Ler quatro valores inteiros (A, B, C, D) e apresentar apenas os que
   sejam divisíveis por 2 e 3, usando ponteiros. */

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, d;

    // Ponteiros para as variáveis
    int32_t *pa = &a;
    int32_t *pb = &b;
    int32_t *pc = &c;
    int32_t *pd = &d;

    cout << "=== VALORES DIVISIVEIS POR 2 E 3 (COM PONTEIROS) ===" << endl << endl;

    cout << "Informe valor para <A>...: ";
    cin >> *pa;
    cin.ignore(80, '\n');

    cout << "Informe valor para <B>...: ";
    cin >> *pb;
    cin.ignore(80, '\n');

    cout << "Informe valor para <C>...: ";
    cin >> *pc;
    cin.ignore(80, '\n');

    cout << "Informe valor para <D>...: ";
    cin >> *pd;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Numeros divisiveis por 2 e 3: " << endl << endl;

    if (*pa % 2 == 0 && *pa % 3 == 0)
        cout << "A = " << *pa << endl;

    if (*pb % 2 == 0 && *pb % 3 == 0)
        cout << "B = " << *pb << endl;

    if (*pc % 2 == 0 && *pc % 3 == 0)
        cout << "C = " << *pc << endl;

    if (*pd % 2 == 0 && *pd % 3 == 0)
        cout << "D = " << *pd << endl;

    cout << "\nEnderecos de memoria das variaveis:" << endl;
    cout << "A: " << &a << " | Ponteiro pa: " << pa << endl;
    cout << "B: " << &b << " | Ponteiro pb: " << pb << endl;
    cout << "C: " << &c << " | Ponteiro pc: " << pc << endl;
    cout << "D: " << &d << " | Ponteiro pd: " << pd << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
