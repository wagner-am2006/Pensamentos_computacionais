/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void exibirVetor(int vetor[], int tamanho)
{
    int i;
    
    for (i=0; i<tamanho; i++)
    {
        printf("%d ",vetor[i]);
        
    }
    
    printf("\n");   

}

void bubbleSort (int vetor[], int tamanho)
{
    int i, j, auxiliar;
    
    for (i = 0; i <tamanho -1; i++)
    {
        for(j=0; j<tamanho-1-i; j++)
        {
            if(vetor[j]> vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
            }
        }
    }
}


/*------------------------*/
int main(void)
{
    int senhas [5]={35, 12, 28, 7, 19};
    int tamanho=5;
    
    printf("Senha antes: \n");
    exibirVetor(senhas, tamanho);
    
    printf("Senha depois da ordenação: \n");
    bubbleSort(senhas, tamanho);
    exibirVetor(senhas, tamanho);
}    