#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[31]={'\0'},str2[31]={'\0'};
    int l1=0,l2=0,i=0,j=0,c=0,verifica;


    printf("inserire la prima parola: ");

    verifica=scanf("%[^ \n\t]",&str1);
    fflush(stdin);




    if (verifica!=1){
        printf("| err |\nvalore inserito errato\n");
        exit(0);
    }
    for (l1=0;str1[l1]!='\0';l1++);
    if (l1>30){
        printf("| err |\nla stringa 1 e' troppo lunga");
        exit(0);
    }


    printf("inserire la seconda parola: ");
    verifica=scanf("%[^ \n\t]",&str2);
    fflush(stdin);

    if (verifica!=1){
        printf("| err |\nvalore inserito errato\n");
        exit(0);
    }


    if (l2>l1){
        printf("| err | la lunghezza della seconda stringa e' maggiore della prima");
        exit(0);
    }

    for (l2=0;str2[l2]!='\0';l2++);
    if (l2>30){
        printf("| err |\nla stringa 2 e' troppo lunga");
        exit(0);
    }
    if (l1<=l2){
        printf("| err |\nla stringa 2 e' piu' lunga della stringa 1");
        exit(0);
    }

    for (i=0;i<l1;i++){
        c=0;
        if (str1[i]==str2[0]){
            for (j=0;j<l2;j++){
                if (str1[i+j]==str2[j]){
                    c++;
                }

            }
            if (c==l2){
                j=0;
                while (j<l2-1){
                    str1[i+j]=' ';
                    j++;

                }
                str1[i+j]='*';

            }
            else{
                continue;
            }

        }


    }

    for (j=0;j<l1;j++){
        if (str1[j]!=' '){
            printf("%c",str1[j]);
        }

    }
    return 0;
}

