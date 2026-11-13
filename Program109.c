#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;

        }
    }

    if(iSum == 1)
    {
        true;
    }
    else
    {
        false;
    }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("It is not a Prime Number\n");
    }

    return EXIT_SUCCESS;
}