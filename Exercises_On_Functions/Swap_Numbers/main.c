#include <stdio.h>
#include <stdlib.h>

unsigned int Num_One , Num_Two ;

void Swap_Numbers (unsigned int *Num1,unsigned int *Num2);

int main()
{
    printf("Enter 1st Number : ");
    scanf ("%i",&Num_One);
    printf("Enter 2nd Number : ");
    scanf ("%i",&Num_Two);

    printf ("Before Swap Num1 = %i \t Num2 = %i \n", Num_One, Num_Two);

    Swap_Numbers( &Num_One, &Num_Two);

    printf ("After  Swap Num1 = %i \t Num2 = %i \n", Num_One, Num_Two);



    return 0;
}

void Swap_Numbers (unsigned int *Num1,unsigned int *Num2)
{
    unsigned int temp = 0 ;
    temp = *Num1 ;
    *Num1 = *Num2 ;
    *Num2 = temp ;
}
