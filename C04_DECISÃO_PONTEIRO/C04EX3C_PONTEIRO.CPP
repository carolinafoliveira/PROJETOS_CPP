// PROGRAMA C04EX3C_PONTEIRO.CPP

/* Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas
pelas variaveis N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD) desse aluno e apresentar a mensagem "Aprovado" se a media obtida for maior
ou igual a 5; caso contrario, apresentar a mensagem "Reprovado". Informar tambem, apos a apresentacao das mensagens, o valor da media obtida pelo aluno.
COM PONTEIRO.*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
    float nota1, *pnota1 = &nota1;
    float nota2, *pnota2 = &nota2;
    float nota3, *pnota3 = &nota3;
    float nota4, *pnota4 = &nota4;
    float media, *pmedia = &media;
    int16_t turma, *pturma = &turma;
    string nome, *pnome = &nome;

    cout << "=== CALCULADORA DE MEDIA DE ALUNO ===" << endl << endl;

    cout << "Informe o nome do aluno........: ";
    getline(cin, nome);
    cout << endl;

    cout << "Informe a turma do aluno.......: "; cin >> *pturma;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 1> do aluno....: "; cin >> *pnota1;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 2> do aluno....: "; cin >> *pnota2;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 3> do aluno....: "; cin >> *pnota3;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 4> do aluno....: "; cin >> *pnota4;
    cout << endl;
    cin.ignore(80, '\n');

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media > 5) {
        cout << "Aluno.........: " << *pnome << endl;
        cout << "Turma.........: " << turma << endl;
        cout << "Situacao......: Aprovado" << endl;
        cout << "Media Final...: " << *pmedia << endl << endl;
    }
    else {
        cout << "Aluno.........: " << nome << endl;
        cout << "Turma.........: " << *pturma << endl;
        cout << "Situacao......: Reprovado" << endl;
        cout << "Media Final...: " << media << endl << endl;
    }

    cout << "A variavel <NOTA 1> esta armazenada no endereco de memoria...............: " << &nota1 << endl;
    cout << "A variavel <NOTA 2> esta armazenada no endereco de memoria...............: " << &nota2 << endl;
    cout << "A variavel <NOTA 3> esta armazenada no endereco de memoria...............: " << &nota3 << endl;
    cout << "A variavel <NOTA 4> esta armazenada no endereco de memoria...............: " << &nota4 << endl;
    cout << "A variavel <MEDIA FINAL> esta armazenada no endereco de memoria..........: " << &media << endl;
    cout << "A variavel <NOME> esta armazenada no endereco de memoria.................: " << &nome << endl;
    cout << "A variavel <TURMA> esta armazenada no endereco de memoria................: " << &turma << endl;
    cout << "A variavel ponteiro <NOTA 1> esta armazenada no endereco de memoria......: " << &pnota1 << endl;
    cout << "A variavel ponteiro <NOTA 2> esta armazenada no endereco de memoria......: " << &pnota2 << endl;
    cout << "A variavel ponteiro <NOTA 3> esta armazenada no endereco de memoria......: " << &pnota3 << endl;
    cout << "A variavel ponteiro <NOTA 4> esta armazenada no endereco de memoria......: " << &pnota4 << endl;
    cout << "A variavel ponteiro <MEDIA FINAL> esta armazenada no endereco de memoria.: " << &pmedia << endl;
    cout << "A variavel ponteiro <NOME> esta armazenada no endereco de memoria........: " << &pnome << endl;
    cout << "A variavel ponteiro <TURMA> esta armazenada no endereco de memoria.......: " << &pturma << endl << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
