// PROGRAMA C04EX3D.CPP

/* Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variaveis
N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD1) desse aluno e apresentar a mensagem "Aprovado" se a
media obtida for maior ou igual a 7; caso contrario, o programa deve solicitar a quinta nota (variavel NE)
do aluno e calcular uma nova media aritmetica (variavel MD2) entre a nota de exame e a primeira media aritmetica.
Se o valor da nova media for maior ou igual a 5, apresentar a mensagem "Aprovado em exame"; caso contrario,
apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o valor da media
obtida pelo aluno.*/

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

    cout << "=== CALCULADORA DE MEDIA ESCOLAR ===" << endl << endl;

    cout << "Informe o nome do aluno.........: ";
    getline(cin, nome);
    cout << endl;

    cout << "Informe a turma do aluno...........: "; cin >> turma;
    cout << endl;
    cin.ignore(80, '\n');

    cout << "Informe a nota do 1o bimestre......: "; cin >> nota1;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe a nota do 2o bimestre......: "; cin >> nota2;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe a nota do 3o bimestre......: "; cin >> nota3;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Informe a nota do 4o bimestre.......: "; cin >> nota4;
    cin.ignore(80, '\n');
    cout << endl;

    media1 = (nota1 + nota2 + nota3 + nota4)/4;

    if (media1 >= 7) {
        cout << "Aluno...........................: " << nome << endl;
        cout << "Turma...........................: " << turma << endl;
        cout << "Situacao........................: Aprovado" << endl;
        cout << "Media........................: " << setw(5) << media1 << endl << endl;
    }
    else {
        cout << "Aluno " << nome << " convocado para exame." << endl << endl;
        cout << "Informe nota de exame do aluno..: ";
        cin >> notaExame;
        cin.ignore(80, '\n');
        cout << endl << endl;

        media2 = (notaExame + media1)/2;

            if (media2 >= 5){
                cout << "Aluno...........................: " << nome << endl;
                cout << "Turma...........................: " << turma << endl;
                cout << "Situacao........................: Aprovado em Exame" << endl;
                cout << "1a media........................: " << setw(5) << media1 << endl;
                cout << "2a media........................: " << setw(5) << media2 << endl << endl;
            }
            else {
                cout << "Aluno...........................: " << nome << endl;
                cout << "Turma...........................: " << turma << endl;
                cout << "Situacao........................: Reprovado." << endl;
                cout << "1a media........................: " << setw(5) << media1 << endl;
                cout << "2a media........................: " << setw(5) << media2 << endl << endl;

            }
    }

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
