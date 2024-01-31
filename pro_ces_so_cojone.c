#include <stdio.h>

int main()
{
    int n1,n2,n3;

    printf("scrivi 3 numeri o ti uccido\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if(n3-n2 == n2-n1)
    {
        printf("è una processione l arnao è felice\n");
    }
    else 
    {   
        printf("non è una processione la arnao ti uccide\n");
    }

    return(0);
}