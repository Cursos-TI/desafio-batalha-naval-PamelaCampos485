//inicio do codigo
#include <stdio.h>

int main(){
    //matriz
    int tabuleiro[10][10];
    int cone[3][5];
    int cruz[3][5];
    int octaedro[3][3];
    //loops para a matriz fazer o tabuleiro(água)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    //Navio na posição horizontal
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    //Navio na posição vertical
    tabuleiro[4][1] = 3;
    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;

    //Primeiro navio na posição diagonal
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    //Seugundo navio na posição diagonal
    tabuleiro[1][9] = 3;
    tabuleiro[2][8] = 3;
    tabuleiro[3][7] = 3;

    //Habilidade cone
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0 && j == 2){
                cone[i][j] = 5;
            }else if(i == 1 && j >= 1 && j <= 3){
                cone[i][j] = 5;
            }else if( i == 2 && j >= 0 && j <= 4){
                cone[i][j] = 5;
            }else{
                cone[i][j] = 0;
            }
        }
    }

    //cruz
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 5; j++){
        }
    }

   //Habilidade da cruz
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(i == 1 || j == 2){
                cruz[i][j] = 5;
            }else{
            cruz[i][j] = 0;
            }
        }
   }

   //Origem habilidade cruz
   int origemLinhaCruz = 4;
   int origemColunaCruz = 4;
   //Sobrepoem cruz no tabuleiro
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(cruz[i][j] == 5){
                tabuleiro[origemLinhaCruz + i][origemColunaCruz + j] = 5;
            }
        }
   }

   //Octaedro
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 1 || j == 1){
                octaedro[i][j] = 5;
            }else{
                octaedro[i][j] = 0;
            }
        }
   }

   //Origem da habilidade octaedro
   int origemLinhaOctaedro = 7;
   int origemColunaOctaedro = 7;
   //Sobrepoem no tabuleiro
   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(octaedro[i][j] == 5){
                tabuleiro[origemLinhaOctaedro + i][origemColunaOctaedro + j] = 5;
            }
        }
   }

    //Origem da habilidade cone
    int origemLinha = 6;
    int origemColuna = 0;
    //Sobrepom cone no tabuleiro
    for(int i= 0; i < 3; i++){
        for(int j= 0; j < 5; j++){
            if(cone[i][j] == 5){
                tabuleiro[origemLinha + i][origemColuna + j] = 5;
            }
        }
    }




    //Mostra o tabuleiro e as posicões dos navios
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }

    return 0;
    //FIM DO PROGRAMA
}
