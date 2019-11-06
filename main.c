#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define True 1
#define False 0

int main()
{
    int i,j,v,k,p;
    char r,c;
    char tab[10][10];
    int n;
    char last;
    int casi[4]={0,0,0,0};
    int FINE_GIOCO;

    //riempiano la matrice di punti
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            tab[i][j]='.';

        }
    }
    for (i=0;i<10;i++){
        printf("|");
        for (j=0;j<10;j++){

            printf(" %c |",tab[i][j]);
        }
        puts("");
    }

    srand(time(NULL));
    r=(rand()%(9-0+1))+0;
    c=(rand()%(9-0+1))+0;
    tab[r][c]=65;


    for (last=65;last!='Z';last++){


        while(1){

            n=(rand()%(4-1+1))+1;

            switch (n){
                case 1:
                    if (tab[r-1][c]=='.' && r!=0){
                        r--;
                        v=True;
                        break;
                    }
                    else{
                        v=False;
                        casi[0]=1;

                    }
                case 2:
                    if (tab[r][c+1]=='.' && c!=9){
                        c++;
                        v=True;
                        break;
                    }
                    else{
                        v=False;
                        casi[1]=2;
                    }
                case 3:
                    if (tab[r+1][c]=='.' && r!=9){
                        r++;
                        v=True;
                        break;
                    }
                    else{
                        v=False;
                        casi[2]=3;
                    }
                case 4:
                    if (tab[r][c-1]=='.' && c!=0){
                        c--;
                        v=True;
                        break;
                    }
                    else{
                        v=False;
                        casi[3]=4;
                    }
                default:break;


            }
            if (v==True){
                for (k=0;k<4;k++){
                    casi[k]=0;
                }

                break;

            }
            else{
                p=0;
                for (k=0;k<4;k++){
                    if (casi[k]==k+1){
                        p++;


                    }


                }
                if (p==4){
                    FINE_GIOCO=True;
                    break;
                }
                continue;
            }



            }
        if (FINE_GIOCO==True){
            printf("Il gioco e' terminato prima della fine dell ' alfabeto");
            break;
        }
        tab[r][c]=last+1;

        }



    printf("\n\n");
    for (i=0;i<10;i++){
        printf("|");
        for (j=0;j<10;j++){

            printf(" %c |",tab[i][j]);
        }
        puts("");
    }






    return 0;
}

