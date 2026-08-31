#include <stdio.h>

int main(){
    
    int horas, minutos, soma, horas_convertidas;
    
    printf("Qual o horário no momento (hora minutos): ");
    scanf("%d %d", &horas, &minutos);

    
    horas_convertidas= horas*60;
    soma = horas_convertidas + minutos;
    
    printf("Já se passaram %d minutos desde 00:00", soma);
    
    return 0;
    
}


