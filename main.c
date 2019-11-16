#include <stdio.h>
#include <stdlib.h>
#define True 1
#define False 0

int main()
{
    int max,verifica,i,j,contatore=0,primo;
    int *vettore;//dichiaro il mio array dinamico dove inserirò i miei numeri primi//

    printf("inserisci un valore massimo: ");
    verifica=scanf("%d",&max);//chiedo all' utente di inserire il valore entro il quale il codice troverà numeri primi//
    if (verifica!=1 || max<=0){//verifico se il valore inserito è corretto//
        printf("\n | valore inserito non corretto | \n");
        exit(1);//in caso contrario chiudo il programma//
    }

    vettore=NULL;//inizializzo l'array//

    for (i=1;i<=max;i++){//apro un ciclo che analizzerà ogni valore intero da 0 a max//

        for (j=1;j<=i;j++){//apro un ciclo che mi permette di verificare se il numero i è primo o no//
            if (i%j==0 && j!=1 && j!=i){
                primo=False;
                break;//se trova anche solo un valore (diverso da 1 o da se stesso) per cui i è divisibile esce e va al numero i successivo//
            }
            else{
                primo=True;//se no il numero i è considerato primo//
            }

        }

        if (primo==True){//se il numero i è primo..//

            vettore=(int *)realloc(vettore,i*sizeof(int));//ingrandisco la capienza (in termini di memoria) del vettore//
            if (vettore==NULL){
                printf("memoria insufficente");
                exit(1);//se la memoria è insufficente esce dal programma//
            }
            else{
                vettore[contatore]=i;//aggiungo il numero primo alla prima posizione disponibile del vettore//
                contatore++;
            }
        }
    }


    printf("i numeri primi compresi tra 0 e %d sono :\n",max);
    for (i=0;i<contatore;i++){//stampo tutti i numeri primi trovati//
        printf(" %d \n",vettore[i]);


    }
    free(vettore);



    return 0;
}
