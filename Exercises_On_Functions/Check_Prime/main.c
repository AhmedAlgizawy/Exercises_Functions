#include <stdio.h>
#include <stdlib.h>

unsigned int Number , Check ,Result ;
unsigned int Check_Prime (unsigned int Num);

int main()
{
    printf ("Enter Any Number : ");
    scanf  ("%i",&Number);

    Result = Check_Prime(Number);
    if (Result==1)
        printf ("Not Prime Number\n");
    else
        printf ("Prime Number\n");

    return 0;

}


unsigned int Check_Prime (unsigned int Num)
{
    unsigned int count ;

    for (count = 2 ; count < Num ; count++)
    {
        if ((Num % count == 0))
        {
            Check = 1 ;
            break ;
        }
        else
            Check = 0 ;
    }
    return Check ;
}
