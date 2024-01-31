#include <stdio.h>

void calcolatrice()
{
   
    int x;
    int y;
    char a;
    
    printf("inserisci due variabili\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf(" scegli tra le 4 operazioni (+)(-)(*)(/)");
    scanf(" %c", &a);
    if( a == '+'  )
    {
        printf("il risultato è %d\n" , x + y);
    }
    
    if( a == '-'  )
    {
        printf("il risultato è %d\n" , x - y);
    }
    if( a == '*'  )
    {
        printf("il risultato è %d\n" , x * y);
    }
    if( a == '/'  )
    {
        printf("il risultato è %d\n" , x / y);
    }
}
int main()

{

{
calcolatrice();
}


    
return(0);

}

