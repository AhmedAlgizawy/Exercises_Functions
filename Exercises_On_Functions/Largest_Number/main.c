#include <stdio.h>
#include <stdlib.h>

unsigned int size , Result ;
unsigned int Largest_Number (unsigned int size);

int main()
{
    printf("How Many Number Will Be Enter : ");
    scanf ("%i",&size);

    Result = Largest_Number (size);
    printf ("The largest element in the array is : %i\n",Result);

    return 0;
}

unsigned int Largest_Number (unsigned int size)
{
    unsigned int count , arr[size] , Number , Max = 0 ;
    for ( count = 0 ; count < size ; count++ )
    {
        printf("element - %i : ",count);
        scanf ("%i",&Number);
        arr[count]= Number ;
        if (Number > Max)
            Max = Number ;
    }
    return Max ;
}
