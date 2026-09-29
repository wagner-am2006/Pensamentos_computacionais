/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char cpf[12];
    float soma = 0.0, preco;
    
    printf("digite seu cpf: ");
    scanf("%11s", &cpf);
    
    do{
        printf("digite o valor: ");
        scanf("%f", &preco);
        
        if(preco>0){
            soma+=preco;
        }
    } while(preco>0);
    
    printf("\n cpf: %s\n", cpf);
    printf("total da compra: %.2f", soma);
    
    return 0;
}
