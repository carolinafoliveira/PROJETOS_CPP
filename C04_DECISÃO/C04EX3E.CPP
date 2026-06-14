// PROGRAMA C04EX3E.CPP

/* Efetuar a leitura de tres valores numericos (representados pelas variaveis A, B e C) e processar
o calculo da equacao completa de segundo grau, utilizando a formula de Bhaskara (considerar para a solucao do problema todas as possiveis
condicoes para delta: delta < 0 - nao ha solucao real, delta > 0 - ha duas solucoes reais e diferentes e delta = 0 - ha apenas uma solucao
real). Lembre-se de que é completa a equacao de segundo grau que possui todos os coeficientes A, B e C diferentes de zero. O programa deve apresentar
respostas para todas as condicoes estabelecidas para delta.*/

#include <iostream>
#include <cmath>   // para sqrt()
#include <iomanip>

using namespace std;

int main()
{
    int16_t a, b, c;

    cout << "=== CALCULANDO A EQUACAO DE SEGUNDO GRAU ===" << endl << endl;

    cout << "Informe o valor de <A>: "; cin >> a;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe o valor de <B>: "; cin >> b;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe o valor de <C>: "; cin >> c;
    cin.ignore(80, '\n');
    cout << endl;

    if (a != 0 and b != 0 and c != 0) {
        int16_t delta = pow(b, 2) - 4 * a * c;

        cout << "Delta = " << delta << endl << endl;

        if (delta < 0) {
            cout << "Nao ha solucao real (delta < 0)." << endl << endl;
        }
        else if (delta == 0) {
            int16_t x = -b / (2 * a);
            cout << "Ha apenas uma solucao real: x = " << x << endl << endl;
        }
        else {
            int16_t x1 = (-b + sqrt(delta)) / (2 * a);
            int16_t x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Ha duas solucoes reais e diferentes:" << endl << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl << endl;
        }
    }
    else {
        cout << "Nao e uma equacao completa de segundo grau (A, B e C devem ser diferentes de zero)." << endl << endl;
    }

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
