// PROGRAMA C05EX1B_WHILE.CPP

/* Elaborar programa que mostre os resultados da tabuada de um numero qualquer
a qual deve ser apresentada de acordo com sua forma tradicional*/

#include <iostream>

using namespace std;

int main(void)
{
	int32_t i = 1, resultado, n;
	
	cout << "=== TABUDADA ===" << endl << endl;
	
	cout << "Informe o numero desejado...: ";
	cin >> n;
	cin.ignore(80, '\n');
	cout << endl;
	
	while (i <= 10) {
	
		resultado = i * n;
	
		cout << "Resultado de " << i << " * " << n << " = " << resultado << endl;
	
		++i;
	}
	
	cout << endl << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
