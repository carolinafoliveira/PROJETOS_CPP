// PROGRAMA C07EX1B.CPP

/* Elaborar um programa que leia oito elementos numericos inteiros
em uma matriz A de uma dimensão do tipo vetor. Construir uma matriz B
de mesmo tipo e dimensão com os elementos da matriz A multiplicados 
por 5. Montar uma rotina de pesquisa binaria para pesquisar os 
elementos armazenados na matriz B.*/

#include <iostream>
#include <array> 

using namespace std;

int main(void)
{
	array<int32_t, 8> aVetor;
    array<int32_t, 8> bVetor;
	int32_t buscar, inicio, meio, fim;
	bool achar;
	
	cout << "=== PESQUISA BINARIA COM MATRIZ ===" << endl << endl;
	
	for(size_t i = 0; i < aVetor.size(); ++i) {
		cout << "Informe o " << i + 1 << " valor: ";
		cin >> aVetor[i];
		cin.ignore(80, '\n');
	}

    for(size_t i = 0; i < bVetor.size(); ++i) {
        bVetor[i] = aVetor[i] * 5;
    }
	
	cout << "\nO que deseja buscar? ";
	cin >> buscar;
	cin.ignore(80, '\n');
	
	inicio = 0;
	fim =  7;
	achar = false;
	
	while (inicio <= fim and achar == false) {
		meio = (inicio + fim) / 2;
		
		if(bVetor[meio] == buscar)
			achar = true;
		else { 
			if (buscar < bVetor[meio]) 
				fim = meio - 1;
			else 
				inicio = meio + 1;
		}
	}
	
	if(achar == true) 
		cout << "\nO valor encontrado na posicao: " << meio + 1 << endl;
	else 
		cout << "\nValor nao encontrado!" << endl;
	
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
