//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckEven
// Input :          Integer
// Output:          Integer
// Description :    Checks if a number is even or odd
// Date :           24/10/2026
// Author :         Shivam Damodar Dhage
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It is EVEN Number");
    }
    else
    {
        printf("It is ODD Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}