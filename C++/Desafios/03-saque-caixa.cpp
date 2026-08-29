//Faça um codigo onde uma pessoa informe a valor que deseja sacar di caixa. O programa deve informar quantas notas de 100, 50, 20, 10, 5 e 2 são necessárias para chegar ao valor necessário. Deixe o codigo limpo, ou seja, mostre apenas as notas necessárias. SE o valor informado foi 50 reais, retorne na tela apenas uma linha, com o valor de 50 reais.
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Digite o valor que deseja sacar. Notas disponiveis:\nR$100,00\nR$50,00\nR$20,00\nR$10,00\nR$5,00\nR$2,00\n\n";
    int ValorSacarTotal;
    cin >> ValorSacarTotal;

    int Nota100 = (ValorSacarTotal / 100); 
        if (Nota100 > 0) {
             cout <<"Notas de R$100,00: " << Nota100;
    }
    ValorSacarTotal %= 100;
    int Nota50 = ValorSacarTotal/50; 
        if (Nota50 > 0) { 
            cout <<"\nNotas de R$50,00: " <<Nota50;
    }
    ValorSacarTotal %= 50;
    int Nota20 = ValorSacarTotal/20; 
        if (Nota20 > 0) {
             cout <<"\nNotas de R$20,00: " <<Nota20;
    }
    ValorSacarTotal %= 20;
    int Nota10 = ValorSacarTotal/10; 
        if (Nota10 > 0) { 
            cout <<"\nNotas de R$10,00: " <<Nota10;
    }
    ValorSacarTotal %= 10;
    int Nota5 = ValorSacarTotal/5; 
        if (Nota5 > 0) {
            cout <<"\nNotas de R$5,00: " <<Nota5;
    }
    ValorSacarTotal %= 5;
    int Nota2 = ValorSacarTotal/2; 
        if (Nota2 > 0) {
            cout <<"\nNotas de R$2,00: " <<Nota2;
    }
    ValorSacarTotal %= 2;
    
        if (ValorSacarTotal > 0) {
            cout <<"Não é possivel sacar esse valor. Digite outro valor.";
    }
    
     return 0;
}