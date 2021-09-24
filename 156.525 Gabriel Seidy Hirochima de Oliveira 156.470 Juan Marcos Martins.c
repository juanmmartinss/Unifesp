#include <stdio.h>
#include <stdlib.h>

/* Jogo da Velha;

Gabriel Seidy Hirochima de Oliveira RA:156.525;
Juan Marcos Martins RA:156.470;
*/


int main(){
    int tabuleiro[3][3] = {{-1, -1, -1},{-1, -1, -1},{-1, -1, -1}};
    int linha, coluna;
    int i, j; //"i" percorre linha e "j" precorre colunas;
    int jogador = 0;
    int continua = 0; // Ao verificar se alguem ganhou, muda o continua para 1;
    int contador = 0; //Tem a funcao de contar o numero de jogadas;
    int resposta; //Resposta do "Deseja jogar novamente";

    do{ //Looping para jogar novamente;
        continua=0;
        contador=0;
        for(i=0;i<3;i++){ //Zerar tabuleiro;
            for(j=0;j<3;j++){
                tabuleiro[i][j] = -1;
            }
        }
        printf("\ncoluna:0 coluna:1 coluna:2\n\n"); //Construcao do tabuleiro;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(tabuleiro[i][j]!=-1)
                    printf("|   %d\t|",tabuleiro[i][j]);
                else
                    printf("|    \t|");
                if(j == 2)
                    printf(" linha:%d", i);
            }
            printf("\n");
        }
        do{ //Condicao de vitoria, limite de 9 jogadas;
            do{ //Armazenar linha e coluna de cada jogador;
                printf("\nJogador %d",jogador);
                printf("\nLinha: ");
                scanf("%d",&linha);
                while(linha<0 || linha>2){
                    printf("Valor incorreto!");
                    printf("\nLinha: ");
                    scanf("%d",&linha);
                }
                printf("Coluna: ");
                scanf("%d",&coluna);
                while(coluna<0 || coluna>2){
                    printf("Valor incorreto!");
                    printf("\nColuna: ");
                    scanf("%d",&coluna);
                }
                if(tabuleiro[linha][coluna]!=-1){
                    printf("\nJogada invalida, tente novamente!\n");
                }
            }while(tabuleiro[linha][coluna]!=-1);

            tabuleiro[linha][coluna] = jogador;
            jogador = (jogador+1)%2;

            printf("\ncoluna:0 coluna:1 coluna:2\n\n");//Mostrar tabuleiro com a jogada feita;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(tabuleiro[i][j]!=-1)
                        printf("|   %d\t|",tabuleiro[i][j]);
                    else
                        printf("|    \t|");
                    if(j == 2)
                        printf(" linha:%d", i);
                }
                printf("\n");
            }

            //Condições de vitoria por colunas jogador 0;
            if(tabuleiro[0][0] == 0 && tabuleiro[1][0] == 0 && tabuleiro[2][0] == 0 ){
                printf("\n Vitoria do Jogador 0 pela coluna 0!\n");
                continua = 1;
            }
            if(tabuleiro[0][1] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][1] == 0 ){
                printf("\n Vitoria do Jogador 0 pela coluna 1!\n");
                continua = 1;
            }
            if(tabuleiro[0][2] == 0 && tabuleiro[1][2] == 0 && tabuleiro[2][2] == 0 ){
                printf("\n Vitoria do Jogador 0 pela coluna 2!\n");
                continua = 1;
            }

            //Condições de vitoria por linhas jogador 0;
            if(tabuleiro[0][0] == 0 && tabuleiro[0][1] == 0 && tabuleiro[0][2] == 0 ){
                printf("\n Vitoria do Jogador 0 pela linha 0!\n");
                continua = 1;
            }
             if(tabuleiro[1][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[1][2] == 0 ){
                printf("\n Vitoria do Jogador 0! pela linha 1\n");
                continua = 1;
            }
             if(tabuleiro[2][0] == 0 && tabuleiro[2][1] == 0 && tabuleiro[2][2] == 0 ){
                printf("\n Vitoria do Jogador 0 pela linha 2!\n");
                continua = 1;
            }

            //Condições de vitoria pela diagonal principal jogador 0;
            if(tabuleiro[0][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][2] == 0 ){
                printf("\n Vitoria do Jogador 0 pela diagonal principal!\n");
                continua = 1;
            }

            //Condições de vitoria pela diagonal secundaria jogador 0;
            if(tabuleiro[0][2] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][0] == 0 ){
                printf("\n Vitoria do Jogador 0 pela diagonal secundaria!\n");
                continua = 1;
            }


            //Condições de vitoria por colunas jogador 1;
            if(tabuleiro[0][0] == 1 && tabuleiro[1][0] == 1 && tabuleiro[2][0] == 1 ){
                printf("\n Vitoria do Jogador 1 pela coluna 0!");
                continua = 1;
            }
            if(tabuleiro[0][1] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][1] == 1 ){
                printf("\n Vitoria do Jogador 1 pela coluna 1!\n");
                continua = 1;
            }
            if(tabuleiro[0][2] == 1 && tabuleiro[1][2] == 1 && tabuleiro[2][2] == 1 ){
                printf("\n Vitoria do Jogador 1 pela coluna 2!\n");
                continua = 1;
            }

            //Condições de vitoria por linhas jogador 1;
            if(tabuleiro[0][0] == 1 && tabuleiro[0][1] == 1 && tabuleiro[0][2] == 1 ){
                printf("\n Vitoria do Jogador 1 pela linha 0!\n");
                continua = 1;
            }
            if(tabuleiro[1][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[1][2] == 1 ){
                printf("\n Vitoria do Jogador 1 pela linha 1!\n");
                continua = 1;
            }
            if(tabuleiro[2][0] == 1 && tabuleiro[2][1] == 1 && tabuleiro[2][2] == 1 ){
                printf("\n Vitoria do Jogador 1 pela linha 2!\n");
                continua = 1;
            }

            //Condições de vitoria pela diagonal principal jogador 1;
            if(tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][2] == 1 ){
                printf("\n Vitoria do Jogador 1 pela diagonal principal!\n");
                continua = 1;
            }

            //Condições de vitoria pela diagonal secundaria jogador 1;
            if(tabuleiro[0][2] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][0] == 1 ){
                printf("\n Vitoria do Jogador 1 pela diagonal secundaria!\n");
                continua = 1;
            }
            contador++;
        }while(continua==0 && contador<9); //Ate as condicoes se cumprirem,permanece no laco;

        if(continua==0){ //Como ja se passaram 9 jogadas e o continua permance 0 nao houve ganhador;
            printf("\n Deu velha!\n");
        }
        printf("\nDeseja jogar novamente? (digita 0) \n");
        scanf("%d", &resposta);
        printf("\n");
    }while(resposta == 0);
    return 0;
}
