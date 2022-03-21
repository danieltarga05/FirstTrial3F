#include <stdio.h>

int main(){
    int n_giorni;
    printf("Inserisci un numero da 1 a 7: \n");
    scanf ("%d", &n_giorni);
    while (n_giorni<1 || n_giorni>7)
    {
        printf("Errore! Reinserisci il numero: \n");
        scanf ("%d", &n_giorni);
    }
    switch (n_giorni)
    {
        case 1: printf("Lunedì \n"); break;
        case 2: printf("Martedì \n"); break;
        case 3: printf("Mercoledì \n"); break;
        case 4: printf("Giovedì \n"); break;
        case 5: printf("Venerdì \n"); break;
        case 6: printf("Sabato \n"); break;
        case 7: printf("Domenica \n"); break;
    }
    
}