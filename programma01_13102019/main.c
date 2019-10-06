//Autore: Riccardo Leonelli


#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main()
{
    int a; //variabile lunghezza printf()//

    char carattere="a";
    signed char carattere_segnato=-2;
    unsigned char carattere_nonSegnato="5";

    int intero=100;
    short int intero_corto=10;
    long int intero_lungo=1000;
    signed int intero_segnato=-100;
    unsigned int intero_nonSegnato=100;
    signed short int intero_Ssegnato=-100;
    unsigned short int intero_SnonSegnato=100;
    signed long int intero_Lsegnato=-100;
    unsigned long int intero_LnonSegnato=100;



    float reale=100.1111;

    double reale_lungo=100.101010101;


    printf("Variabili :\n\n");
//Variabili char
    a=printf("| carattere | tipo: char | valore: %-5c | valore massimo: %-5d | valore minimo: %-5d | occupazione di memoria: %d [byte] |\n",carattere,CHAR_MAX,CHAR_MIN,sizeof(carattere));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| carattere_segnato | tipo: signed char | valore: %-5c | valore massimo: %-5d | valore minimo: %-5d | occupazione di memoria: %d [byte] |\n",carattere_segnato,SCHAR_MAX,SCHAR_MIN,sizeof(carattere_segnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| carattere_nonSegnato | tipo: unsigned char | valore: %-5c | valore massimo: %-5d | occupazione di memoria: %d [byte] |\n",carattere_nonSegnato,UCHAR_MAX,sizeof(carattere_nonSegnato));
    printf("lunghezza printf(): %d \n\n",a);
//Variabili interi
    a=printf("| intero | tipo: int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero,INT_MAX,INT_MIN,sizeof(intero));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_corto | tipo: short int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_corto,SHRT_MAX,SHRT_MIN,sizeof(intero_corto));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_lungo | tipo: long int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_lungo,LONG_MAX,LONG_MIN,sizeof(intero_lungo));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_segnato | tipo: signed int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_segnato,INT_MAX,INT_MIN,sizeof(intero_segnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_nonSegnato | tipo: unsigned int | valore: %05d | valore massimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_nonSegnato,UINT_MAX,sizeof(intero_nonSegnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_Ssegnato | tipo: signed short int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_Ssegnato,SHRT_MAX,SHRT_MIN,sizeof(intero_Ssegnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_SnonSegnato | tipo: unsigned short int | valore: %05d | valore massimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_SnonSegnato,USHRT_MAX,sizeof(intero_SnonSegnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_Lsegnato | tipo: signed long int | valore: %05d | valore massimo: %05d | valore minimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_Lsegnato,LONG_MAX,LONG_MIN,sizeof(intero_Lsegnato));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| intero_LnonSegnato | tipo: unsigned long int | valore: %05d | valore massimo: %05d | occupazione di memoria: %5d [byte] |\n",intero_LnonSegnato,ULONG_MAX,sizeof(intero_LnonSegnato));
    printf("lunghezza printf(): %d \n\n",a);
//Variabile float
    a=printf("| reale | tipo: float | valore: %05.2f | occupazione di memoria: %5d [byte] |\n",reale,sizeof(reale));
    printf("lunghezza printf(): %d \n\n",a);
    a=printf("| reale_lungo | tipo: double | valore: %-20.5e | occupazione di memoria: %5d [byte] |\n",reale_lungo,sizeof(reale_lungo));
    printf("lunghezza printf(): %d \n\n",a);




    return 0;
}
