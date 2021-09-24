#include <stdio.h>
#include <stdlib.h>
#define max 3

/*Ler duas matrizes 3x3, calcular e imprimir a soma e a
multiplicação dessas matrizes.*/

int main()
{
    int m1[max][max], m2[max][max], soma[max][max], prod[max][max];
    int i,j,k;

    printf("DIGITE OS VALORES DA PRIMEIRA MATRIZ\n\n");
    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
        {
            printf("m1[%d][%d]:",i,j);
            scanf("%d",&m1[i][j]); //Armazena os valores da primeira matriz;
        }

    }

    printf("\nDIGITE OS VALORES DA SEGUNDA MATRIZ\n\n");
    for(i=0; i<max; i++) //percorre o vetor
    {
        for(j=0; j<max; j++) //percorre o vetor para a posição i;
        {
            printf("m2[%d][%d]:",i,j);
            scanf("%d",&m2[i][j]); //Armazena os valores da segunda matriz;
        }

    }

    printf("\nA matriz soma e:\n\n");
    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
        {
            soma[i][j] = m1[i][j]+ m2[i][j]; //soma os numeros nas mesmas posições entre duas matrizes;
            printf("%d\t",soma[i][j]);
        }
        printf("\n"); //pula linha
    }

    printf("\nA matriz produto e:\n\n");
    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
        {
            prod[i][j]=0;

            for(k=0; k<max; k++) //variável percorre "travada" j e i;
            {
            prod[i][j] = prod[i][j] + m1[i][k]*m2[k][j]; //multiplica os numeros com linhas opostas das colunas depois soma-se as multiplicações;
            }
        }
    }

    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
        {
            printf("%d\t",prod[i][j]); //mostra a matriz produto;
        }
        printf("\n");

    }
    return 0;
}
