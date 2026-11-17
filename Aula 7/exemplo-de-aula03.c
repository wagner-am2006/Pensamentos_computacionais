#include <stdio.h>

void exibirEstoque(int estoque[], int tamanho){
    int i;
    
    for (i=0; i < tamanho; i++){
        printf("%d ", estoque[i]);
    }
    printf("\n");
}

void selectionSort(int estoque[], int tamanho){
    int i, j, posicaoMenor, auxiliar;
    
    for(i=0; i<tamanho-1; i++){
        posicaoMenor = i;
        for(j=i+1; j<tamanho; j++){
            if (estoque[posicaoMenor]>estoque[j]){
                posicaoMenor = j;
            }
        }
        auxiliar = estoque[i];
        estoque[i] = estoque[posicaoMenor];
        estoque[posicaoMenor] = auxiliar;
        
    }
}

int main(void) {
    int estoque[6] = {18, 5, 27, 12, 9, 21};
    int tamanho = 6;
    
    printf("Estoque antes da organização: \n");
    exibirEstoque(estoque, tamanho);
    
    selectionSort(estoque, tamanho);
    printf("\nEstoque depois da ordenação: \n");
    exibirEstoque(estoque, tamanho);
    
    return 0;
}