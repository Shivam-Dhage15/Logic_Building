#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
{
    int iCnt = 0, iSum = 0;


    for(iCnt =1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;
        }
    }
    
    return(iSum == iNo);
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    int bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("it is Perfect number");
    }
    else
    {
        printf("it is Perfect number");
        
    }

    

    return EXIT_SUCCESS;
}


// Time Complexicity : O(N/2)