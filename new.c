#include <stdio.h>

void pakinator()
{
   
    char letteraaaa;
    
    printf("inserisci una letteraaaa\n");
    scanf("%c", &letteraaaa);
 
 
 if(  letteraaaa == 'a' || letteraaaa == 'e' || letteraaaa == 'i' || letteraaaa == 'o' || letteraaaa == 'u' )
    {
        printf("è una di quelle che chiamano vocali\n");
    }
    else 
    {   
        printf("spiazze ritenta\n");
    }

}


int main()

{

{
    pakinator();
}


    
return(0);

}






