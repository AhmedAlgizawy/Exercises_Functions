#include <stdio.h>
#include <stdlib.h>

unsigned int Number ;
unsigned int Check_Armstrong_Number (unsigned int Num);
unsigned int Check_Perfect_Number (unsigned int Num);

int main()
{
    unsigned int Check = 0 ;
    printf ("Enter Any Number : ");
    scanf  ("%i",&Number);
    Check = Check_Armstrong_Number(Number);

    if (Check)
        printf("The %i is an Armstrong number.\n",Number);
    else
        printf("The %i is not an Armstrong number.\n",Number);

    printf("-------------------------------------------\n");

    Check = Check_Perfect_Number(Number);

    if (Check)
        printf("The %i is a Perfect number.\n",Number);
    else
        printf("The %i is not a Perfect number.\n",Number);



    return 0;
}

unsigned int Check_Armstrong_Number (unsigned int Num)
{
    unsigned int sum=0 , Count ;
    Count = Num ;
    while (Count!=0)
    {
        sum+=((Count%10)*(Count%10)*(Count%10));
        Count/=10;
    }
    return (Num == sum) ;
}
unsigned int Check_Perfect_Number (unsigned int Num)
{
    unsigned int sum=0 , Count ;
    Count = Num-1 ;
    while (Count > 0)
    {
        if ((Num%Count) == 0 )
            sum+=Count;
        Count--;
    }
    printf("%i\n",sum);
    return (Num == sum) ;
}
