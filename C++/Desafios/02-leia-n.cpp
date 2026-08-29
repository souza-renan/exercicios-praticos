// Faça um programa que peça um número inteiro positivo N. Depois, o programa deve somar todos os números de 1 até N e mostrar o resultado.
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Informe um numero, e esse valor informado, vamos mostrar a sequencia de 1 até esse numero. Após isso, mostraremos a soma desses valores\nDigite o valor: ";
    int ValorDigitado;
    cin >>ValorDigitado;

    if (ValorDigitado <= 0) {
        cout <<"O valor digitado precisa ser maior do que zero";
    }
        else {cout <<"Os valores à serem somados são: 1";
    
    int i;
    int valorsomado;
    valorsomado = 1;

    for (i = 2; i <= ValorDigitado; i++) {
        valorsomado += i;
        cout <<" + " << i;
    }
        cout <<" = " << valorsomado;
        }
    return 0;
}
