#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define M 5

void crea(char matrice[M][M]){

    // Creazione della matrice
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (j % 2 == 0 && i % 2 == 0) {
                matrice[i][j] = ' ';
            } else {
                if (j % 2 == 1) {
                    matrice[i][j] = '|';
                }
                if (i % 2 == 1) {
                    matrice[i][j] = '-';
                }
            }
        }
    }
}
void stampa(char matrice[M][M]) {

    // Qui ci sarà il campo di gioco che si aggiornerà ogni volta
    printf("  TRIS\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}
/*void menu(){

    int c=0;

    printf("Benvenuto nella collectors_games!!!");
    printf("Cosa vuoi fare?");
    printf("Premi 1 per giocare o 0 per uscire...");
    scanf("%d", &c);

    if( c== 1){
        main();
    }
    else{
        abort();
    }
}*/

void gioco(char matrice[M][M],  int scelta){

    static int i, j;
    int l=0, k=0;
    
    if(scelta == 1){
        printf("Giocatore dove vuoi mettere la tua pedina ??\n");
        printf("Dimmi la coordinata delle righe   ovvero 0,2 oppure 4\n");
        printf("Quelle delle colonne invece è la stessa, ovvero 0,2 e 4..\n");
        scnaf("%d%d", &l, &k);
            if(matrice[l][k] == ' '){
                matrice[l][k] = 'X';
                scelta = 2;
                gioco(matrice, scelta);
            }
                    else{
                        
                    }
            }
        }
    }
    else{

    }
    
    

}
int main() {
    
    int s, luck;
    char  g1, g2;

    srand(time(NULL)); // Seed the random number generator

    luck = rand() % 2 + 1; // Generate a random number between 1 and 2

    //menu();

    do{

        printf("Inserisci 1 per iniziare :  " );
        scanf("%d", &s);
    }while(s<=0 || s>=2);

    system("cls");

    char matrice[M][M];

    crea(matrice);

    stampa(matrice);

   
    gioco(matrice, luck);
     /* 
    if(luck == 4){
        printf("Giocatore 2 hai vinto!!!");
    }
    else if(luck == 3){
        printf("Giocatore 1 hai vinto!!!");
    }
    else{
        printf("La partita è terminata in pareggio, spiaze :(");
    }
    return 0;*/
}
