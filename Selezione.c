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
    if (n_giorni==1)
        printf("Lunedì");
    else if (n_giorni==2)
        printf("Martedì");
    else if (n_giorni==3)
        printf("Mercoledì");
    else if (n_giorni==4)
        printf("Giovedì");
    else if (n_giorni==5)
        printf("Venerdì");
    else if (n_giorni==6)
        printf("Sabato");
    else if (n_giorni==7)
        printf("Domenica");
    
}