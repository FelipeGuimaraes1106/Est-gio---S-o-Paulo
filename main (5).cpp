/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string texto;
    string invertido = "";
    cout <<"Digite a string para ser invertido:"<<endl;
    cin >>texto;

    // Percorre a string de trás para frente e adiciona os caracteres em outra string
    for (int i = texto.length() - 1; i >= 0; i--) {
        invertido += texto[i];
    }

    cout << "String invertida: " << invertido << endl;

    return 0;
}