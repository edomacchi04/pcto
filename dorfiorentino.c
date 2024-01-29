#include <stdio.h>

int main()
{
    int numero;
    int numero2;

    printf("inserisci due numeri\n");
    scanf("%d", &numero);
    scanf("%d", &numero2);
    printf("numero+numero2: %d\n", (numero+numero2));
    printf("numero-numero2: %d\n", (numero-numero2));
    printf("numero/numero2: %d\n", (numero/numero2));
    printf("numero*numero2: %d\n", (numero*numero2));
    return 0;
}