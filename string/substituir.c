#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça uma função que receba como entrada três strings
(A, B e C) e retorne uma quarta string formada pela
substituição de todas as ocorrências da string B pela
string C dentro da string A*/

int main()
{
    char frase[200];
    char antiga[100];
    char nova[100];
    char nova_frase[200];
    int i, k, variavel;

    printf("Digite uma frase:\n");
    gets(frase); //Armazena a frase inicial;

    printf("Digite a palavra que deseja substituir:\n");
    gets(antiga); //Armazena a palavra que sera substituida;

    printf("Digite a nova palavra:\n");
    gets(nova); //Armazena a nova palavra;

    printf("\nNova frase : ");
    strcat(frase, " "); //concatena as palavras com espaco;


    k=0;
    for(i = 0; frase[i] != '\0'; i++){ //Percorre letra por letra ate a posicao \0;

        if(frase[i] != ' '){ //Se a frase na posicao for diferente de espaco;
            nova_frase[k] = frase[i]; //Nova frase vai recebendo as letras da frase antiga ;
            k++; //Nova posicao
        }
        else{ //Quando encontrar espaco;
            nova_frase[k] = '\0'; //A nova frase e interrompida;
            k = 0; //k volta a ser 0, para iniciar novamente;
            variavel = strcmp(nova_frase, antiga); //Variavel recebe a comparacao;
            if(variavel == 0){ //Compara o conteudo das palavras armazenadas, se for igual;
                printf("%s ", nova); //Substitui pela nova palavra;
            }
            else{ //Se nao for igual escreve a palavra da frase antiga;
                printf("%s ", nova_frase);
            }
        }
    } //Laco que percorre palavra por palavra;

    printf("\n\n"); //Pula linha;

    return 0;
}
