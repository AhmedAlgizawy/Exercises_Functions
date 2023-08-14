#include <stdio.h>
#include <stdlib.h>

unsigned int Number , Result ;

unsigned int Check_Even_Odd (unsigned int Num);

int main()
{

    printf("Enter Number : ");
    scanf ("%i",&Number);

    Result = Check_Even_Odd(Number);

    if(Result == 1)
        printf("The Number is Even\n");
    else
        printf("The Number is Odd\n");


    return 0;
}


unsigned int Check_Even_Odd (unsigned int Num)
{
    return ((Num%2)==0);
}
