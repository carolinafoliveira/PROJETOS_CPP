// PROGRAMA C07EX1C.CPP

/* Construir um programa que leia 15 elementos inteiros em uma 
matriz A de uma dimensão do tipo vetor. Construir uma mantriz B
de mesmo tipo e dimensão, em que cada elemento seja o fatorial
do elemento correspondente armazenado na matriz A. Apresente
os elementos da matriz B ordenados de forma crescente.*/

#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array<int64_t, 15> aVetor;
	array<int64_t, 15> bVetor;
	
	
	cout << "=== FATORIAL COM MATRIZ ===" << endl << endl;
	
	for(size_t i = 0; i < aVetor.size(); ++i) {
		cout << "Informar o " << i + 1 << " valor p/ matriz <A>: ";
		cin >> aVetor[i];
		cin.ignore(80, '\n');
	}
	
	
	for(size_t i = 0; i < aVetor.size(); ++i) {
		int64_t fat = 1;
		
		for(int64_t j = 1; j <= aVetor[i]; ++j) {
			fat *= j;
		} 
		
		bVetor[i] = fat;
	}	
	
    for (size_t i = 0; i < bVetor.size() - 1; ++i) {
        for (size_t j = i + 1; j < bVetor.size(); ++j){
            if (bVetor[i] > bVetor[j]){
                int32_t x = bVetor[i];
                bVetor[i] = bVetor[j];
                bVetor[j] = x;
            }
        }
    }
	
	cout << "\nValores da Matriz <B>: " << endl << endl;
	for(size_t i = 0; i < bVetor.size(); ++i) {
		cout << "Fatorial de " << i + 1 << " = " << bVetor[i] << endl;
	}
	
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
	
	return 0;
}
