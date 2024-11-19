#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define M 5

void crea(char matrice[M][M]){ // Funzione cha crea la matrice iniziale

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
void stampa(char matrice[M][M]) { // Funzione che ogni volta stampera la mia matrice aggiornandola con le X o i O


    // Qui ci sarà il campo di gioco che si aggiornerà ogni volta
    printf("  TRIS\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}
void gioco(); // Funzione che è alla base del mio gioco( posizionamento dei simboli, e richiamo alla funzione che ogni volta stampa la matrice)
int checkWin(); // Funziona che visone le eventuali condizioni di vittoria
int main() {
}
