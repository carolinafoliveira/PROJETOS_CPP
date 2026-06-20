// PROGRAMA C05EX1D_WHILE.CPP

/* Elaborar um programa que apresente o somatorio dos valores pares 
existentes de 1 até 500 */

#include <iostream>

using namespace std;

int main(void)
{
	int32_t i = 1, soma = 0;
	
	cout << "=== SOMATORIO DOS PARES DE 1 ATE 500 ===" << endl << endl;
	
	while (i <= 500) 
	{ 
		if (i % 2 == 0) 
		{
			soma += i;
		}
		++i;
	} 
	
	cout << endl;
	cout << "Somatorio dos pares de 1 ate 500: " << soma;
	
	cout << endl << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
