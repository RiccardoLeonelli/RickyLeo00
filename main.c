#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int verifica,nparole,contatore=5,i=0,j=0,fine=0;
    char elemento,*parola,**parole;

    printf("inserisci quante parole verranno contenute nell' array: ");
    verifica=scanf("%d",&nparole);//l' utente inserisce quanti puntatori a char dovrà contenere l ' array dinamico
    fflush(stdin);
    if (verifica!=1 || nparole<=0 ){
        printf("valore inserito errato");
        exit(1);
    }


    parole=(char **) malloc(nparole*sizeof(char*));//alloco al vettore dinamico memoria per la determinata quantità di puntatori
    if (parole==NULL){//in caso dopo la sdallocazione fallisca per mancanza di memoria chiudo il programma
        printf("memoria insufficente");
        exit(1);
    }


    for (j=0;j<nparole;j++){
        i=0;
        fine=0;
        free(parola);
        parola=NULL;//faccio puntare a nulla il puntatore a vettore per poter inserire una nuova parola
        contatore=10;



        printf("Inserisci parola n.%d:",j+1);

        while (!fine) {

             verifica=scanf("%c",&elemento);//chiedo all' utente il char
             if (verifica!=1){
                printf("valore inserito errato");
                exit(1);
             }




             if (elemento=='\n' || elemento==' ') {//quando termina la parola chiudo il ciclo terminando il vettore parola
                    fine = 1;
             }
             else {
                 i++;

                 if (i==1 || contatore%10==0){//realloco memoria all' ampliarsi del vettore parola
                    parola=(char *) realloc(parola,i*sizeof(char)*10);
                    contatore=contatore*2;
                 }

                 if (parola==NULL) {//in caso dopo la reallocazione fallisca per mancanza di memoria chiudo il programma
                     printf("Memoria insufficiente");
                     exit(1);
                 }

                 parola[i-1]=elemento;//inserisco il cararattere inserito all' interno del vettore


             }
        }

        parola[i]='\0';//aggiungo il terminatore
        printf("\nla parola n.%d e' %s \n\n",j+1,parola);
        parole[j]=parola;//inserisco il vettore dinamico di caratteri all' interno del vettore dinamico di puntatori contenenti stringhe

    }
    for (j=0;j<nparole;j++){
        for (i=0;i<strlen(parole[j]);i++){
            printf("%c",toupper(*(*(parole+j)+i)));//stampo ogni carattere di ogni parola in maiuscolo
        }
        puts("");

    }

    for (j=0;j<nparole;j++){//libero la memoria
        free(parole[j]);
    }
    free(parole);

    return 0;
}
