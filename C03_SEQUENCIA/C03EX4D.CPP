// PROGRAMA C03EX4D.CPP

/* Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, utilizando um automovel que faz 12 quilomentros
por litro. Para obter o calculo, o usuario deve fornecer o tempo gasto (variavel TEMPO) e a velocidade media (variavel VELOCIDADE)
durante a viagem. Dessa maneira, sera possivel obter a distancia percorrida com a formula DISTANCIA = TEMPO * VELOCIDADE. A partir do valor
da distancia, basta calcular a quantidade de litros de combustivel utilizada na viagem com a formula LITROS_USADOS = DISTANCIA / 12. O programa
deve apresentar os valotes da velocidade media, tempo gasto na viagem, a distancia percorrida e a quantidade de litros utilizada na viagem.*/

#include <iostream>
#include <iomanip>
#include <cstdint>

using namespace std;

int main(void)
{
    cout << setprecision(2) << fixed << right;

    float tempo, velocidade, distancia, litros;

    cout << "=== DADOS DE UMA VIAGEM ===" << endl << endl;

    cout << "Informe o <TEMPO> da viagem..............: "; cin >> tempo;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <VELOCIDADE MEDIA> da viagem...: "; cin >> velocidade;
    cout << endl;
    cin.ignore(80, '\n');

    distancia = tempo * velocidade;

    litros = distancia / 12;

    cout << "Velocidade media da viagem...............: " << setw(8) << velocidade << endl;
    cout << "Tempo gasto na viagem....................: " << setw(8) << tempo << endl;
    cout << "Distancia percorrida na viagem...........: " << setw(8) << distancia << endl;
    cout << "Litros usados na viagem..................: " << setw(8) << litros << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
