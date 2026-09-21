#include <stdio.h>

int main() {
    int participantes;
 
    
    do{
        printf("Digite o número de participantes: ");
        scanf("%d", &participantes);
        
    }while(participantes <1 || participantes >3);
    
    printf("Equipe registrada com %d participantes \n", participantes);

    return 0;
}