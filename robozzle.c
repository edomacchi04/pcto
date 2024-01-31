#include <stdio.h>

int main()
{
    int n1,n2,n3;







    printf("scrivi 3 numeri o ti uccido\n");v
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if(n1+n2>n3 && n2+n3>n1 && n3+n1>n2)
    {
        printf("è un bel triangolo\n");
    }
    else 
    {   
        printf("hai studiat?\n");
    }

    return(0);
}