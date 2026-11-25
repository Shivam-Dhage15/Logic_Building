// Problem based on Digit
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            printf("Odd : %d\n",iDigit);
        }
        else
        {
            printf("Even : %d\n",iDigit);
        }
        
        iNo = iNo /10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    EXIT_SUCCESS;
}