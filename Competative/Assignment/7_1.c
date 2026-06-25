// Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    it(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf("#\t");
    }   

}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}