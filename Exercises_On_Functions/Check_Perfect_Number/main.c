#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne , NumberTwo ;
void Check_Perfect_Number (unsigned int Num1 , unsigned int Num2);

int main()
{
    printf ("Enter lowest search limit of perfect numbers : ");
    scanf  ("%i",&NumberOne);
    printf ("Enter highest search limit of perfect numbers : ");
    scanf  ("%i",&NumberTwo);

    Check_Perfect_Number(NumberOne,NumberTwo);

    return 0;
}


void Check_Perfect_Number (unsigned int Num1 , unsigned int Num2)
{
    unsigned int sum=0, count, i ;
    for ( i = Num1 ; i <= Num2 ; i++ )
    {
        sum=0;
        for ( count = i-1 ; count > 0 ; count-- )
        {
            if ((i%count) == 0 )
                sum+=count;
        }
        if ( i == sum )
            printf("The %i is a Perfect number.\n",i);
    }
}
