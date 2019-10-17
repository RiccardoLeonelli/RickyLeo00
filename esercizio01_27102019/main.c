#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i=0;
    char stringa[100];
    char c;

    int alfanumerico=0,alfabetico=0,numerico=0,spaziotabulazione=0,controllo=0,grafico=0,minuscolo=0,maiuscolo=0,stampabile=0,spazio=0,esadecimale=0,punteggiatura=0;
    memset(stringa,'\0',sizeof(stringa));
    printf(" Inserisci stringa  \n (Per terminare digitare: '#' ):\n\n  ");
    while ((c=getchar())!='#'){
            stringa[i++]=c;
            if (isalnum(c)!=0){//conteggio alfanumerici
                ++alfanumerico;
            }
            if (isdigit(c)!=0){//conteggio numerici
                ++numerico;
            }
            if (isalpha(c)!=0){//conteggio alfabetici
                ++alfabetico;
            }
            if (isblank(c)!=0){//conteggio spaziotabulazione
                ++spaziotabulazione;
            }
            if (iscntrl(c)!=0){//conteggio controllo
                ++controllo;
            }
            if (isgraph(c)!=0){//conteggio grafici
                ++grafico;
            }
            if (islower(c)!=0){//conteggio minuscoli
                ++minuscolo;
            }
            if (isupper(c)!=0){//conteggio maiuscoli
                ++maiuscolo;
            }
            if (isprint(c)!=0){//conteggio caratteri stampabili
                ++stampabile;
            }
            if (ispunct(c)!=0){//conteggio punteggiatura
                ++punteggiatura;
            }
            if (isspace(c)!=0){//conteggio spazi
                ++spazio;
            }
            if (isxdigit(c)!=0){//conteggio esadecimali
                ++esadecimale;
            }



    }
    printf(" la stringa e' :\n %s\n\n",stringa);
    printf(" numero di:\n alfanumerico= %d\n alfabetico= %d\n numerico= %d\n spaziotabulazione= %d\n controllo= %d\n grafico=%d\n minuscolo= %d\n maiuscolo= %d\n stampabile= %d\n spazio= %d\n esadecimale= %d\n punteggiatura= %d",alfanumerico,alfabetico,numerico,spaziotabulazione,controllo,grafico,minuscolo,maiuscolo,stampabile,spazio,esadecimale,punteggiatura);
    return 0;
}
