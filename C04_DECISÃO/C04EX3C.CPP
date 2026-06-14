// PROGRAMA C04EX3C.CPP

/* Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas
pelas variaveis N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD) desse aluno e apresentar a mensagem "Aprovado" se a media obtida for maior
ou igual a 5; caso contrario, apresentar a mensagem "Reprovado". Informar tambem, apos a apresentacao das mensagens, o valor da media obtida pelo aluno.*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
    float nota1, nota2, nota3, nota4, media;
    int16_t turma;
    string nome;

    cout << "=== CALCULADORA DE MEDIA DE ALUNO ===" << endl << endl;

    cout << "Informe o nome do aluno........: ";
    getline(cin, nome);
    cout << endl;

    cout << "Informe a turma do aluno.......: "; cin >> turma;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 1> do aluno....: "; cin >> nota1;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 2> do aluno....: "; cin >> nota2;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 3> do aluno....: "; cin >> nota3;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a <NOTA 4> do aluno....: "; cin >> nota4;
    cout << endl;
    cin.ignore(80, '\n');

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media > 5) {
        cout << "Aluno.........: " << nome << endl;
        cout << "Turma.........: " << turma << endl;
        cout << "Situacao......: Aprovado" << endl;
        cout << "Media Final...: " << media << endl << endl;
    }
    else {
        cout << "Aluno.........: " << nome << endl;
        cout << "Turma.........: " << turma << endl;
        cout << "Situacao......: Reprovado" << endl;
        cout << "Media Final...: " << media << endl << endl;
    }
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
