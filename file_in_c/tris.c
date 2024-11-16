#include <stdio.h>

#define M 5

void campo_da_gioco(char matrice[M][M]) {
    // Qui ci sarà il campo di gioco che si aggiornerà ogni volta
    printf("  TRIS\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

void menu() {
    
    int s;
    
    printf("Benvenuto al gioco del Tris!\n");
    do{
        printf("Inserisci 1 per iniziare : %d\n ", s);
        scanf("%d", &s);
    }while(s!=0);
}

int main() {
    menu();

    int cnt = 0;
    char matrice[M][M];

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

    // Mostra il campo di gioco
    campo_da_gioco(matrice);

    // Esempio di inserimento di un simbolo
    matrice[0][0] = 'X'; // Giocatore 1
    campo_da_gioco(matrice);

    // Qui puoi aggiungere il codice per gestire i turni dei giocatori

    return 0;
}