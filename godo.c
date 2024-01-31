#include <stdio.h>

int main()
{
    int n1,n2,n3;

    printf("scrivi 3 numeri o ti uccido\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if(n1 != n2 != n3)
    {
        printf("è un triangolo scaleno\n");
    }
    else if((n1 == n2 || n1 == n3 || n2 == n3) && (n1!=n3 || n2 != n3 || n1 != n3 ))
    {   
        printf("è un triangolo isoscele \n");
    }
    else if(n1 == n2 && n2 == n3)
    {
        printf("è un triangolo equilatero\n");
    }
   
    return(0);
}   