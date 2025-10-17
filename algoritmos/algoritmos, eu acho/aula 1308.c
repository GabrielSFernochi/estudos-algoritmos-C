
#include <stdio.h>

int main()
{
   int num;
   int num1;
   int num1e1;
   int num3c, num3ca;
   float div=num3c/num3ca;
   printf("digite um numero entre 1 e 3.\n");
   scanf("%d", &num);
   switch (num){
     case 1 :
     printf("digite um numero:"); scanf("%d", num1e1);
     if (num1e1%2==1) {printf("o numero é impar");}
     else printf ("o numero é par");
     break;
     case 2 :
     printf ("Digite um numero:");
     scanf("%d", &num1);
     int numc2=num1*num1;
     printf ("o quadrado do numero %d e %d", num1, numc2);
     break;
     case 3 :
     printf ("Digite um numero:"); scanf("%d", &num3c);
     printf ("digite outro numero:"); scanf("%d", &num3ca);
     printf ("o resultado da divisao e:%0.1f", div);
     break;

     default:
     printf("entre 1 e 3");
   }
    return 0;
}
