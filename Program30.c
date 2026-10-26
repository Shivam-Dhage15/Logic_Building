#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30] ;
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",sName);  // ENTER remains in input buffer

    printf("Enter Your Age : \n");
    scanf("%d",&iAge);

    printf("Enter Your Marks :\n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your Age is \n: %d",iAge);
    printf("Your Marks : %f",fMarks);

    return EXIT_SUCCESS;
}