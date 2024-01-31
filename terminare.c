#include <stdio.h>

int main()
{
    float n1 = 0;
    float n2 = 0; // sommma dei numeri  messi 
    float n3; // numeri messi
    float n4; // media
    while(n1 >= 0)
{
    printf("appiccia un numero\n"); 
    scanf("%f", &n1);
    
    n3 = n3 + n1;
    n2 = n2 + n1;
    
    if(n1 > 0)
    {
        n4 = n2 / n1;
        printf("media %f\n", n4);
    }
   
    }

    printf("la tua media è\n");

return(0);

}

