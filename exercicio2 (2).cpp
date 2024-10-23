/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// Função que verifica se um número pertence à sequência de Fibonacci
//bool=booleano (verdadeiro ou falso)
bool isFibonacci(int number) {
    // Inicializa os dois primeiros números
    int a = 0, b = 1;

    // Verifica a sequência de Fibonacci até o número informado
    while (a <= number) {
        if (a == number) {
            return true; // se o número foi encontrado,retorna verdadeiro
        }
        int next = a + b; // Calcula o próximo número
        a = b;            // Atualiza 'a' para o próximo número
        b = next;        // Atualiza 'b' para o próximo número
    }

    return false; // O número não foi encontrado
}

int main() {
    int number;
    // Solicita ao usuario o numero
    cout << "Informe um número: ";
    cin >> number;

    // Chama a função para verificar se o número pertence à sequência de Fibonacci
    if (isFibonacci(number)) {
        cout << "O número " << number << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << number << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}