#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("It is Divisible by three");
    }
    else
    {
        printf("It is not divisible by three");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}