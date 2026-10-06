#include <stdio.h>

int main()
{
    int vendas[3][4];
    int i,j;
    
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Digite o valor da venda[%d][%d]: ", i, j);
            scanf("%d", &vendas[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("\nO valor da venda[%d][%d] foi: %d \n", i, j, vendas[i][j]);
        }
    }

    return 0;
}