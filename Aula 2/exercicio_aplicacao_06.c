#include <stdio.h>
#include <math.h>

int main(){
    
    
    float largura, comprimento, area_total, valor_unitário, caixas_nece, custo_total;
    
    printf("Digite o comprimento (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura (em metros): ");
    scanf("%f", &largura);
    printf("Digite o valor unitário da caixa : ");
    scanf("%f", &valor_unitário);

    area_total = comprimento * largura;
    caixas_nece = ceil(area_total / 2.5);
    custo_total = valor_unitário * caixas_nece;
    
    printf("O valor total da sua compra será R$%.2f e o total de caixas necessárias será %.0f ", custo_total, caixas_nece );
    
    return 0;
    
}
