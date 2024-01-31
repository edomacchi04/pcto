#include <stdio.h>

void stampaCubo()
{
    int numero;
    int cubo;
    printf("inserisci il cubo da fare: ");
    scanf("%d", &numero);
    cubo = numero * numero *numero;
    printf("il cubo di %d è %d\n", numero, cubo);

}

void stampaQuadrato()
{
    int numero;
    int quadrato;
    printf("inserisci il quadrato da fare: ");
    scanf("%d", &numero);
    quadrato = numero * numero;
    printf("il quadrato di %d è %d\n", numero, quadrato);

}

int main()

{
    printf("quadrato\n");
    stampaQuadrato();
    printf("cubo\n");
    stampaCubo();
    printf("quadrato\n");
    stampaQuadrato();
    printf;("cubo\n");
    stampaCubo();

return(0);

}






