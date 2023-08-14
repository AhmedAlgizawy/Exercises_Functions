#include <stdio.h>
#include <stdlib.h>

unsigned int Series (unsigned int Num_series);

int main()
{
    unsigned int Number = 0 , Result ;

    printf("find the sum of (1!/1+2!/2+3!/3+...)\n");
    printf("Enter Number of sieres : ");
    scanf ("%i",&Number);

    Result = Series(Number);
    printf("The Sum of the Series is : %i \n",Result);

    return 0;
}

unsigned int Series (unsigned int Num_series)
{
    unsigned int count , count1 , x=1 , y=0 ;
    for (count1 = 1 ; count1 <= Num_series ; count1++)
    {
        x=1;
        for ( count = 1 ; count <= count1 ; count++)
        {
            x *= count;
        }
        y += x/count1;
    }
    return y ;
}
