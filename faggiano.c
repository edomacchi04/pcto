#include <stdio.h>

int main()
{
    
    float n1,n2,n3;
   
    printf("scrivi una temperatura in celsius\n");
    scanf("%f",&n1);
    n2 = 1.8 * n1+32;
    n3 = n1 + 273.15;
    
    printf("la tua temperatura in fahrahneit è %f\n", n2);

    if(n3>=0)
    {
        printf("la tua temperatura in kelvin è %f\n", n3);
    }
    else 
    {   
        printf("il tuo valore fa schifo\n");



    }
return(0);

}