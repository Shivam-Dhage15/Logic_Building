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
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("It is EVEN");
    }
    else
    {
        printf("It is ODD");

    }
    return EXIT_SUCCESS;
}