/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int INDICE = 12, SOMA = 0, K = 0;
    
    while (K < INDICE) {
        K++;
        SOMA = SOMA + K;
    }
    
    printf("O valor da Soma: %d\n", SOMA);
    return 0;
}