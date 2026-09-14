#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2;
    float media;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    
    
    media = (nota1 + nota2) / 2;
    
    if(media >= 6){
    printf("Parabéns, sua média é %.1f, portanto você está APROVADO!", media);
    }
    else{
        printf("Infelizmente sua média é %.1f, portanto você está reprovado!", media);
    }
    
    return 0;
}
