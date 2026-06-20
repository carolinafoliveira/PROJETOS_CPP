// PROGRAMA C04EX3D_PONTEIRO.CPP

/* Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variaveis
N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD1) desse aluno e apresentar a mensagem "Aprovado" se a
media obtida for maior ou igual a 7; caso contrario, o programa deve solicitar a quinta nota (variavel NE)
do aluno e calcular uma nova media aritmetica (variavel MD2) entre a nota de exame e a primeira media aritmetica.
Se o valor da nova media for maior ou igual a 5, apresentar a mensagem "Aprovado em exame"; caso contrario,
apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o valor da media
obtida pelo aluno. COM PONTEIRO*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
    cout << setprecision(2) << fixed << right;

    double nota1, nota2, nota3, nota4, media1, notaExame, media2;
    string nome;
    int16_t turma;

    double *pn1 = &nota1, *pn2 = &nota2, *pn3 = &nota3, *pn4 = &nota4;
    double *pmd1 = &media1, *pne = &notaExame, *pmd2 = &media2;

    cout << "=== CALCULADORA DE MEDIA ESCOLAR (COM PONTEIROS) ===" << endl << endl;

    cout << "Informe o nome do aluno.........: ";
    getline(cin, nome);
    cout << endl;

    cout << "Informe a turma do aluno........: "; cin >> turma;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a nota do 1o bimestre...: "; cin >> *pn1;
    cout << "Informe a nota do 2o bimestre...: "; cin >> *pn2;
    cout << "Informe a nota do 3o bimestre...: "; cin >> *pn3;
    cout << "Informe a nota do 4o bimestre...: "; cin >> *pn4;

    *pmd1 = (*pn1 + *pn2 + *pn3 + *pn4) / 4;

    if (*pmd1 >= 7) {
        cout << "\nAluno...........................: " << nome << endl;
        cout << "Turma...........................: " << turma << endl;
        cout << "Situacao........................: Aprovado" << endl;
        cout << "Media...........................: " << setw(5) << *pmd1 << endl << endl;
    }
    else {
        cout << "\nAluno " << nome << " convocado para exame." << endl;
        cout << "Informe nota de exame do aluno..: ";
        cin >> *pne;

        *pmd2 = (*pne + *pmd1) / 2;

        if (*pmd2 >= 5) {
            cout << "\nAluno...........................: " << nome << endl;
            cout << "Turma...........................: " << turma << endl;
            cout << "Situacao........................: Aprovado em Exame" << endl;
            cout << "1a media........................: " << setw(5) << *pmd1 << endl;
            cout << "2a media........................: " << setw(5) << *pmd2 << endl << endl;
        }
        else {
            cout << "\nAluno...........................: " << nome << endl;
            cout << "Turma...........................: " << turma << endl;
            cout << "Situacao........................: Reprovado" << endl;
            cout << "1a media........................: " << setw(5) << *pmd1 << endl;
            cout << "2a media........................: " << setw(5) << *pmd2 << endl << endl;
        }
    }

    cout << "Tecle <Enter> para encerrar...";
    cin.ignore();
    cin.get();

    return 0;
}
