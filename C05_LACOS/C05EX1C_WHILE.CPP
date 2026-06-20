// PROGRAMA C05EX1C_WHILE.CPP

/* Construir um programa que apresente a soma dos 100 numeros naturais 
(1 + 2 + 3 + ... + 98 + 99 + 100)*/

#include <iostream>

using namespace std;

int main(void)
{
	int16_t i = 1;
	int16_t soma = 0;
	
	cout << "=== SOMATORIO DE 1 A 100 ===" << endl << endl;
	
	while (i >= 1 and i <= 100) {
		soma += i;
		++i;
	}
	
	cout << "Somatorio = " << soma << endl << endl;
	
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0; 
}
