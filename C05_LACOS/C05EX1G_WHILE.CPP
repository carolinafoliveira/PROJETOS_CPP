// PROGRAMA C05EX1G_WHILE.CPP

/* Elaborar um programa que apresente os resultados das potencias
do valor de base 3, elevado a um expoente que varie do valor 0 ate 15.
O programa deve apresentar os valores 1, 2, 3, 9, 27, ..., 14.348.907. 
Sugestao: leve em consideracao as definicoes matematicas do calculo de
potencia, em que qualquer valor numerico diferente de zero elevado a zero 
e 1, e todo valor numerico elevado a 1 e ele proprio. Nao use em hipotese
alguma o operador aritmetico de exponenciacao apresentado no capitulo 3; resolva 
o problema com a tecnica de laco*/

#include <iostream>

using namespace std;

int main(void)
{
	int64_t base = 1;
	int64_t exp = 0;

	cout << "=== POTENCIA COM BASE 3 ===" << endl << endl;
	
	while (exp <= 15)
	{
		cout << "3 ^ " << exp << " = " << base << endl;
		++exp;
		base *= 3;
	}
	
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
