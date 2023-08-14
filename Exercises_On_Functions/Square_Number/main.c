#include <stdio.h>
#include <stdlib.h>

unsigned int Get_Square_Number (unsigned int Number);

int main()
{
    unsigned int Num , Result = 0;
    printf ("Enter Any Number for square : ");
    scanf("%i",&Num);
    Result = Get_Square_Number(Num);
    printf("The Square of %i is %i \n",Num,Result);

    return 0;
}

unsigned int Get_Square_Number (unsigned int Number)
{
    return Number * Number ;
}
