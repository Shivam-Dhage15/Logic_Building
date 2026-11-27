// Problem based on Pattern  
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Pattern()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*\t");
    }    
      printf("\n");
}

int main()
{

    Pattern();
  
    EXIT_SUCCESS;
}