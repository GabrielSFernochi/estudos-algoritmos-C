#include <stdio.h>

int main()
{
    int num;
    int resp=num%2;
    do {
       printf ("Digite um número:");
       scanf ("%d", &num);
       resp=num%2;
       if (num<0) {
           printf("O numero deve ser positivo!\n");
       }
       else{
           if (num<50 || num >150) {
               printf("o numero deve ser maior que 50 ou menor que 150\n");
           }

           else {
                 if (resp==1) {
                     printf("o numero é impar\n");
           }
           else {

           printf("o numero é par\n");
           }}
       }}



    while (num%5!=0);


    return 0;
}

