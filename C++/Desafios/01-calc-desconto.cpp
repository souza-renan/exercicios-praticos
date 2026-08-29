// Calculadora de desconto progressivo conforme valor da compra

#include <iostream> 

using namespace std; int 

main() { 
    
// Write C++ code here 

cout << "\n\nValor da compra: R$ "; 

double valorcompra; 
cin >> valorcompra; 
cout << 5/100; 
cout << 5.0/100; 
cout << "\nValor Original: R$ " << valorcompra; 

if ( valorcompra <= 100 ) { 
    double valor5 = (valorcompra * (5.0/100)); 
    double valorfinal5 = (valorcompra-valor5);
    cout << "\n\nDesconto aplicado: 5%" << "\nValor do desconto: " << valor5 << "\nValor Final: " << valorfinal5;
} 

else if ( valorcompra > 500) {
     double valor15 = (valorcompra * (15.0/100)); 
     double valorfinal15 = (valorcompra-valor15); 
     cout << "\nDesconto aplicado: 15%" << "\nValor do desconto: " << valor15 << "\nValor Final: " << valorfinal15; 
} 
     
else { 
    double valor10 = (valorcompra * (10.0/100)); 
    double valorfinal10 = (valorcompra-valor10); 
    cout << "\nDesconto aplicado 10%" << "\nValor do desconto: " << valor10 << "\nValor Final: " << valorfinal10; 
} 

return 0; 

}