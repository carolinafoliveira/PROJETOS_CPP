// PROGRAMA C05EX4H_DO_WHILE.CPP

/* Escrever um programa que apresente como resultado a potencia de uma base qualquer
elevada a um expoente qualquer, ou seja variavel B elevada a variavel E, em que B é o valor
da base e E é o valor do expoente. Considere a entrada de valores inteiros
estritamente positivos (maiores e iguais a zero), ou seja, valores naturais.
Sugestao: nao utilize o formato "base ^ expoente", pois e uma solucao muito trivial.
Use a tecnica de laco, em que o valor da base deve ser multiplicado o numero de vezes
determinado no expoente*/

#include <iostream>

using namespace std;

int main(void)
{
	int32_t base, expoente;
	int32_t i = 1;
	int32_t resultado = 1;
	
	cout << "=== CALCULADORA DE POTENCIA ===" << endl << endl;
	
	do 
	{
		cout << "Informe valor para BASE...: ";
		cin >> base;
		cin.ignore(80, '\n');
		cout << endl;
	
		cout << "Informe valor para EXPOENTE...: ";
		cin >> expoente;
		cin.ignore(80, '\n');
		
		if (base < 0 or expoente < 0)
    {
        cout << endl;
        cout << "ERRO: informe apenas valores positivos." << endl << endl;
    }
	}
	while (base < 0 or expoente < 0);
	
	while (i <= expoente)
		{
			resultado *= base;
			++i;
		}
	
	cout << endl;
	cout << " " << base << " ^ " << expoente << " = " << resultado << endl;
	
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
