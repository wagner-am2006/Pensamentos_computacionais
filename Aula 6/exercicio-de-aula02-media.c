#include <stdio.h>

int main()
{
    int valor[8] = {0};
    float soma = 0.0f;
    float media;
    int acmedia = 0;

   for(int i=0; i<8; i++){
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &valor[i]);
    
    soma += valor[i];
    
    }
    
    media = soma / 8;
    
   for(int i=0; i<8; i++){
        if(valor[i]>media){
            acmedia++;
        }    
   
   }
   printf("Média dos valores: %.1f \n", media);
   printf("Valores acima da média: %d \n", acmedia);
   
    return 0;
}