// PROGRAMA C04EX3E_PONTEIRO.CPP

#include <iostream>
#include <cmath>   // para sqrt()

using namespace std;

int main()
{
    int16_t a, b, c, delta, x1, x2;

    int16_t *pa = &a;
    int16_t *pb = &b;
    int16_t *pc = &c;
    int16_t *pdelta = &delta;
    int16_t *px1 = &x1;
    int16_t *px2 = &x2;

    cout << "=== CALCULANDO A EQUACAO DE SEGUNDO GRAU ===" << endl << endl;

    cout << "Informe o valor de <A>: "; cin >> *pa;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe o valor de <B>: "; cin >> *pb;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe o valor de <C>: "; cin >> *pc;
    cin.ignore(80, '\n');
    cout << endl;


    if (*pa != 0 and *pb != 0 and *pc != 0) {
        *pdelta = pow(*pb, 2) - 4 * (*pa) * (*pc);

        cout << "Delta = " << *pdelta << endl << endl;

        if (*pdelta < 0) {
            cout << "Nao ha solucao real (delta < 0)." << endl << endl;
        }
        else if (*pdelta == 0) {
            *px1 = -(*pb) / (2 * (*pa));
            cout << "Ha apenas uma solucao real: x = " << *px1 << endl << endl;
        }
        else {
            *px1 = (-(*pb) + sqrt(*pdelta)) / (2 * (*pa));
            *px2 = (-(*pb) - sqrt(*pdelta)) / (2 * (*pa));
            cout << "Ha duas solucoes reais e diferentes:" << endl << endl;
            cout << "x1 = " << *px1 << endl;
            cout << "x2 = " << *px2 << endl << endl;
        }
    }
    else {
        cout << "Nao e uma equacao completa de segundo grau (A, B e C devem ser diferentes de zero)." << endl << endl;
    }

    cout << "A variavel <A> esta armazenada no endereco de memoria " << &a << endl;
    cout << "A variavel <B> esta armazenada no endereco de memoria " << &b << endl;
    cout << "A variavel <C> esta armazenada no endereco de memoria " << &c << endl;
    cout << "A variavel <DELTA> esta armazenada no endereco de memoria " << &delta << endl;
    cout << "A variavel <X1> esta armazenada no endereco de memoria " << &x1 << endl;
    cout << "A variavel <X2> esta armazenada no endereco de memoria " << &x2 << endl << endl;

    cout << "A variavel ponteiro <A> esta armazenada no endereco de memoria " << &pa << endl;
    cout << "A variavel ponteiro <B> esta armazenada no endereco de memoria " << &pb << endl;
    cout << "A variavel ponteiro <C> esta armazenada no endereco de memoria " << &pc << endl;
    cout << "A variavel ponteiro <DELTA> esta armazenada no endereco de memoria " << &pdelta << endl;
    cout << "A variavel ponteiro <X1> esta armazenada no endereco de memoria " << &px1 << endl;
    cout << "A variavel ponteiro <X2> esta armazenada no endereco de memoria " << &px2 << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
