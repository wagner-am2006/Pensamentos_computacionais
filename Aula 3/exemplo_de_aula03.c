#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2;
    float media;
    int percentual_falta;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite seu percentual de falta: ");
    scanf("%d", &percentual_falta);
    
    media = (nota1 + nota2) / 2;
    
    if( media >=6){
        if(percentual_falta >=75){
        printf("Parabéns, sua média é %.1f e seu percentual de presença foi %d, portanto você está APROVADO!", media, percentual_falta);
        }
        else{
        printf("Sua média foi %.1f, porém sua frequência foi %d, portanto você está reprovado por falta!", media, percentual_falta);
        }}
        else{
        printf("Infelizmente sua média é %.1f, portanto você está reprovado por nota!", media);
    }
    
    return 0;
}
