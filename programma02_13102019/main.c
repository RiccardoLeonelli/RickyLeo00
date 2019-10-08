#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x=60,y=30,n1=3.101010101,n2=63.12121212;


    x=x/360*2*M_PI; //trasmormo i gradi in radianti
    y=y/360*2*M_PI;
    printf("| l' angolo x vale %f gradi | l' angolo x vale %f gradi | il numero n1 vale %f | il numero n2 vale %f |\n",x,y,n1,n2);//mostro le variabili che verranno utilizzate dagli elementi della libreria <maths.h>
    printf("| sin   => valore: %-7.3f | cos  => valore: %-7.3f | tang => valore: %-7.3f |\n",sin(x),cos(x),tan(x));
    printf("| asin  => valore: %-7.3f | acos => valore: %-7.3f | atan => valore: %-7.3f |\n",asin(sin(x)),acos(cos(x)),atan(tan(x)));
    printf("| sinh  => valore: %-7.3f | cosh => valore: %-7.3f | tanh => valore: %-7.3f |\n",sinh(x),cosh(x),tanh(x));
    printf("| atan2 => valore: %-7.3f |\n\n",atan2(x,y));

    printf("| exp   => valore: %-7.3f | log  => valore: %-7.3f | log10 => valore: %-6.3f |\n",exp(n1),log(n1),log10(n1));
    printf("| ceil  => valore: %-7.3f | fabs => valore: %-7.3f | floor => valore: %-6.3f |\n",ceil(n1),fabs(n1),floor(n1));
    printf("| fmod  => valore: %-7.3f | frexp=> valore: %-7.3f | ldexp => valore: %-6.3f |\n",fmod(n1,n2),frexp(n1,2),ldexp(n1,2));
    printf("| modf  => valore: %-7.3f | pow  => valore: %-7.3f | sqrt  => valore: %-6.3  |\n",modf(n1,n2),pow(n1,n2),sqrt(n1));



    return 0;
}
