//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  No Function
// Input :          Integer
// Output:          Integer
// Description :    Checks if a number is even or odd
// Date :           24/10/2026
// Author :         Shivam Damodar Dhage
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    if((iValue % 2) == 0)
    {
        printf("It is EVEN Number");
    }
    else
    {
        printf("It is ODD Number");
    }

    return EXIT_SUCCESS;
}