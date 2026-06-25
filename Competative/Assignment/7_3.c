// Write a program to find even factorial of given number.
// Input : 5
// Output : 8 (4 * 2)
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }

    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Sum of even factorial is : %d\n",iRet);

    return 0;
}