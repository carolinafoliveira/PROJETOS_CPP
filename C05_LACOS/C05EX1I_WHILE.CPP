//  PROGRAMA C05EX1I_WHILE.CPP

/* Escrever um programa que apresente os valores da sequencia de numerica
de Fibonacci ate o decimo quinto termo. A sequencia de Fibonacci e formada
pelos valores numericos 0, 1, 1, 2, 3, 5, 8, 13, 21 34, 55, 89, 144, 233,
377, ..., etc., obtendo-se o proximo termo a partir da soma do termo atual
com o anterior sucessivamente ate o infinito se a sequencia nao for interrompida,
sendo determinada a partir da formula  Fn = Fn-1 + Fn-2. Utilize
para esse exercicio as variaveis ATUAL, ANTERIOR e PROXIMO.*/

#include <iostream>

using namespace std;

int main(void)
{
    int32_t anterior = 0;
    int32_t atual = 1;
    int32_t proximo;
    int32_t i = 1;

    cout << "=== SEQUENCIA DE FIBONACCI ===" << endl << endl;

    cout << anterior << endl;
    cout << atual << endl;

    while (i <= 13)
    {
        proximo = anterior + atual;
        
        cout << proximo << endl;
          
        anterior = atual;
        atual = proximo;

        ++i;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
