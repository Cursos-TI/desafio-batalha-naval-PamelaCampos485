//inicio do codigo
#include <stdio.h>

int main(){
    //matriz
    int tabuleiro[10][10];
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

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }
    
    return 0;
    //FIM DO PROGRAMA
}
