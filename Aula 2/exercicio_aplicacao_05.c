#include <stdio.h>
#include <math.h>

int main(){
    
    
    float peso, altura, imc;
    
    printf("Qual seu peso (em Kg): ");
    scanf("%f", &peso);
    printf("Qual sua altura (em metros): ");
    scanf("%f", &altura);
    

    imc = peso / (altura * altura);
    
    printf("O seu IMC é %.2f kg/m²", imc);
    
    return 0;
    
}
