// Problem based on Pattern  
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
    }    
    printf("\n");
}

int main()
{

    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
  
    EXIT_SUCCESS;
}