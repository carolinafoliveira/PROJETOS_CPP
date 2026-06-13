// PROGRAMA C03EX4B.CPP

/* ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
A fórmula de conversao é C = ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <iostream>
#include <cstdint>

using namespace std;

int main(void)
{
    float c, f;

    cout << "=== CONVERSOR DE TEMPERATURA ===" << endl;
    cout << "Informe a temperatura em graus Fahrenheit: "; cin >> f;
    cin.ignore(80, '\n');
    cout << endl;

    c = ((f - 32) * 5) / 9;

    cout << "Temperatura em graus Celsius: " << c << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;

}
