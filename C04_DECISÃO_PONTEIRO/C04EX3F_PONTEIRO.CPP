// PROGRAMA C04EX3F_PONTEIRO.CPP


/* Ler tres valores inteiros representados pelas variaveis A, B, e C e apresentar os valores lidos dispostos
em ordem crescente. Dica: utilizar tomada de decisao sequencial e as ideias trabalhadas nos exercicios "g"
(propriedade distributiva) e "f" (troca de valores) do capitulo 03.*/

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, x;

    int32_t *pa = &a;
    int32_t *pb = &b;
    int32_t *pc = &c;
    int32_t *px = &x;

    cout << "=== ORDENACAO DE TRES VALORES (COM PONTEIROS) ===" << endl << endl;

    cout << "Digite o valor de A: ";
    cin >> *pa;
    cout << "Digite o valor de B: ";
    cin >> *pb;
    cout << "Digite o valor de C: ";
    cin >> *pc;

    // Troca de valores usando ponteiros
    if (*pa > *pb) {
        *px = *pa;
        *pa = *pb;
        *pb = *px;
    }
    if (*pa > *pc) {
        *px = *pa;
        *pa = *pc;
        *pc = *px;
    }
    if (*pb > *pc) {
        *px = *pb;
        *pb = *pc;
        *pc = *px;
    }

    cout << "\nValores em ordem crescente: " << *pa << " - " << *pb << " - " << *pc << endl;

    // Mostrar endereços de memória
    cout << "\nEnderecos das variaveis:" << endl;
    cout << "A: " << &a << endl;
    cout << "B: " << &b << endl;
    cout << "C: " << &c << endl;
    cout << "x: " << &x << endl;

    cout << "\nEnderecos dos ponteiros:" << endl;
    cout << "pa: " << &pa << endl;
    cout << "pb: " << &pb << endl;
    cout << "pc: " << &pc << endl;
    cout << "px: " << &px << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.ignore();
    cin.get();

    return 0;
}
