#include <stdio.h>

int main()
{
    int n1;

    printf("scrivi un anno\n");
    scanf("%d",&n1);
    
    if(n1%4 == 0)
    {
        printf("lo è\n");
    }
    else 
    {   
        printf("non lo è\n");
    }

    return(0);
}