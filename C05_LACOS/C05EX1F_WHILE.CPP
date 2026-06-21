// PROGRAMA C05EX1F_WHILE.CPP

/* Construir um programa que apresente todos os valores numericos 
divisiveis por 4 e menores que 200. Sugestao: a variavel que controla o contador
do laço deve ser iniciada com valor 1.*/

#include <iostream>

using namespace std;

int main(void)
{
	int32_t i = 1;
	
	cout << "=== NUMEROS DE 1 A 200 DIVIDIVEIS POR 4 ===" << endl << endl;
	
	while (i < 200) 
	{
		if (i % 4 == 0)
		{
			cout << " " << i << ";" << endl; 
		}
		
		++i;
	}
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
