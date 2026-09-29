#include <stdio.h>

int main()
{
    int qntAlunos;
    float nota, somaNotas = 0.0f, media;
    
    do{
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &qntAlunos);
        if (qntAlunos<=0){
            printf("quantidade inválida de alunos \n");
        }
    }while(qntAlunos<=0);
    
    for(int i = 1; i<=qntAlunos;i++){
        do{
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &nota);
            if(nota<0 || nota>10){
                printf("Nota inválida, digite novamente!");
            }
        }while(nota<0 || nota>10);
        somaNotas += nota;
    }
    
    media = somaNotas/qntAlunos;
    
    printf("Média da turma: %.2f\n", media);

    return 0;
}
