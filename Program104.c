#include<stdio.h>
#include<stdlib.h>

void Checkperfect(int iNo)
{
    int iCnt = 0, iSum = 0;


    for(iCnt =1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNo)
        {
            printf("It is a perferct number");
        }
        else
        {
            printf("It is a not perferct number");
        }
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    

    return EXIT_SUCCESS;
}


// Time Complexicity : O(N/2)