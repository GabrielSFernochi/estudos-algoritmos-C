#include <stdio.h>

int main()
{
    float a1,a2;

    printf("digite a nota a1 (nota máxima 10):");
    scanf("%f", &a1);
    printf("digite a nota a2 (nota máxima 10):");
    scanf("%f", &a2);
    float mfinal=(a1+a2)/2;
    printf("nota final:%0.1f\n", mfinal);
    int resposta;
    printf("deseja calcular outra nota? 1 para sim, 0 para nao\n");
    scanf ("%d", &resposta);

    while (resposta==1){
        printf("digite a nota a1 (nota máxima 10):");
        scanf("%f", &a1);
        printf("digite a nota a2 (nota máxima 10):");
        scanf("%f", &a2);
        float mfinal=(a1+a2)/2;
        printf("nota final:%0.1f", mfinal);
        printf("deseja calcular outra nota? 1 para sim, 0 para nao");
        scanf ("%d", &resposta);
    }

    return 0;
}
