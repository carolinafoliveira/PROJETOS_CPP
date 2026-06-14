// PROGRAMA C03EX4D_PONTEIRO.CPP

/* Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, utilizando um automovel que faz 12 quilomentros
por litro. Para obter o calculo, o usuario deve fornecer o tempo gasto (variavel TEMPO) e a velocidade media (variavel VELOCIDADE)
durante a viagem. Dessa maneira, sera possivel obter a distancia percorrida com a formula DISTANCIA = TEMPO * VELOCIDADE. A partir do valor
da distancia, basta calcular a quantidade de litros de combustivel utilizada na viagem com a formula LITROS_USADOS = DISTANCIA / 12. O programa
deve apresentar os valotes da velocidade media, tempo gasto na viagem, a distancia percorrida e a quantidade de litros utilizada na viagem. COM PONTEIRO.*/

#include <iostream>
#include <iomanip>
#include <cstdint>

using namespace std;

int main(void)
{
    cout << setprecision(2) << fixed << right;

    float tempo, *ptempo = &tempo;
    float velocidade, *pvelocidade = &velocidade;
    float distancia, *pdistancia = &distancia;
    float litros, *plitros = &litros;

    cout << "=== DADOS DE UMA VIAGEM ===" << endl << endl;

    cout << "Informe o <TEMPO> da viagem..............: "; cin >> *ptempo;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <VELOCIDADE MEDIA> da viagem...: "; cin >> *pvelocidade;
    cout << endl;
    cin.ignore(80, '\n');

    *pdistancia = *ptempo * *pvelocidade;

    *plitros = *pdistancia / 12;

    cout << "Velocidade media da viagem...............: " << setw(8) << *pvelocidade << endl;
    cout << "Tempo gasto na viagem....................: " << setw(8) << *ptempo << endl;
    cout << "Distancia percorrida na viagem...........: " << setw(8) << *pdistancia << endl;
    cout << "Litros usados na viagem..................: " << setw(8) << *plitros << endl << endl;

    cout << "A variavel <VELOCIDADE MEDIA> esta armazenada no endereco de memoria " << &velocidade << endl;
    cout << "A variavel <TEMPO> esta armazenada no endereco de memoria " << &tempo << endl;
    cout << "A variavel <DISTANCIA PERCORRIDA> esta armazenada no endereco de memoria " << &distancia << endl;
    cout << "A variavel <LITROS USADOS> esta armazenada no endereco de memoria " << &litros << endl;
    cout << "A variavel ponteiro <VELOCIDADE MEDIA> esta armazenada no endereco de memoria " << &pvelocidade << endl;
    cout << "A variavel ponteiro <TEMPO> esta armazenada no endereco de memoria " << &ptempo << endl;
    cout << "A variavel ponteiro <DISTANCIA PERCORRIDA> esta armazenada no endereco de memoria " << &pdistancia << endl;
    cout << "A variavel ponteiro <LITROS UDADOS> esta armazenada no endereco de memoria " << &plitros << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
