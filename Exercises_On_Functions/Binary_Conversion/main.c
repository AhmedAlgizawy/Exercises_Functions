#include <stdio.h>
#include <stdlib.h>
unsigned int Number_Decimal ;

void Binary_Conversion (unsigned int Num);

int main()
{
    printf("Enter Decimal Number : ");
    scanf("%i",&Number_Decimal);
    Binary_Conversion(Number_Decimal);

    return 0;
}

void Binary_Conversion (unsigned int Num)
{
    unsigned int rem = 0 , f=1 , bn=0;
    while(Num!=0)
    {
        rem = Num%2 ;
        bn = bn + rem*f;
        f*=10;
        Num = Num/2;
    }
    printf ("%i\n",bn);
}



