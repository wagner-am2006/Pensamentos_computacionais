#include <stdio.h>

int main(){
    
    int horas_dia, potencia;
    float kwh;
    
    printf("Qual a potência do equipamento (em watts): ");
    scanf("%d", &potencia);
    printf("Por quantas horas você utiliza por dia: ");
    scanf("%d", &horas_dia);
    

    
    kwh = (float) (potencia*horas_dia*30)/1000;
    
    printf("O consumo mensal desse equipamento é %.2f kWh", kwh);
    
    return 0;
    
}
