#include<stdio.h>

#define M 5

void campo_da_gioco(){

    //qui ci andra il campo da gioco
}
void menu(){

    // menu del gioco
}
int main(){

    menu();
    campo_da_gioco();

    int cnt = 0;
    char matrice[M][M];

    char let1 = 'O';
    char let2 = 'X';
    /*
    printf("Giocatore 1 che pedina scegli?\n");
    printf("scegli la X o il O???");*/
    

    
    // Creazone  della matrice
     for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
               if( j%2 == 0 && i%2 ==0){
                   matrice[i][j] = ' ';
               }
            else{
                if(j%2 == 1){
                    matrice[i][j] = '|';
                }
                if(i%2 == 1){
                    matrice[i][j] = '-';
                }
             }
         }
    }
    
    // Stampa della matrice
    printf("  TRIS\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
    
    
     
}