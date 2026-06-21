// PROGRAMA C05EX1E_WHILE.CPP

/* Elaborar um programa que apresente todos os valores numericos
inteiros impares situados na faixa de 0 a 20. Sugestao: para verificar
se o valor numerico e impar, dentro do laço de repeticao, fazer a verificacao
logica dessa condicao com a instrucao se/fim_Se dentro do proprio laco
perguntando se o valor numerico do contador e impar (se o resto do numero 
dividido por 2 e diferente de zero); sendo, mostre-o; nao sendo, passe
para o proximo valor numerico*/

#include <iostream>

using namespace std;

int main(void)
{
	int16_t i = 0;
	
	cout << "=== NUMEROS IMPARES ENTRE 0 A 20 ===" << endl << endl;
	
	while (i <= 20)
	{
		if (i % 2 != 0)
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
