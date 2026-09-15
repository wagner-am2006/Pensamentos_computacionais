#include <stdio.h>
#include <math.h>

int main()
{
    char hospedagem; 
    int qnt_diarias;
    float valor_diaria, valor_total;
    
    printf("Escolha seu tipo de hospedagem (Simples = S, Dupla = D, Tripla = T): ");
    scanf("%c", &hospedagem);
    printf("Qual a quantidade de diárias: ");
    scanf("%d", &qnt_diarias);
    
    switch(hospedagem){
        case 'S':
        case 's':
            valor_diaria = 300.0f;
            break;
            
        case 'D':
        case 'd':
            valor_diaria = 450.0f;
            break;
            
        case 'T':
        case 't':
            valor_diaria = 500.0f;
            break;
            
        default:
            printf("\n Tipo inválido\n");
            
    }
    
    valor_total = valor_diaria * qnt_diarias;
    
    printf("\n O valor total da sua hospedagem será R$%.2f", valor_total);
    
    return 0;
}
