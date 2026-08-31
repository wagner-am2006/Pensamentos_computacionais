#include <stdio.h>

int main(){
    
    int qntman, qnttar, total;
    
    printf("Quantos produtos foram recebidos durante a manhã: ");
    scanf("%d", &qntman);
    printf("Quantos produtos foram recebidos durante a tarde: ");
    scanf("%d", &qnttar);
    
    total= qntman+qnttar;
    
    printf("A quantidade total de produtos recebidos foi: %d", total);
    
    return 0;
    
}
