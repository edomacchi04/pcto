#include <stdio.h>

int main()
{
    int n1;
    int n2 = 1969;

    printf("quando il mondo ha deciso di creare la creatura più brutta del mondo?\n");
    scanf("%d",&n1);
   
    
    
   if(n1 == n2)
    {
        printf(" sei nato nel 1969\n");
    }
    else if(n1 > n2 )
    {   
        printf(" sei nato %d anni dopo il 1969\n",(n1 - n2));
    }
    else if(n1 < n2)
    {
        printf("sei nato %d anni prima del 1969\n",(n2 - n1));
    }
   

    return(0);
}