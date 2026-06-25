// Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFactorial = 1;
    int OddFactorial = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            EvenFactorial = EvenFactorial * iCnt;
        }
        else
        {
            OddFactorial = OddFactorial * iCnt;
        }
        iDiff = EvenFactorial - OddFactorial;

    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference of even and odd value : %d\n",iRet);

    return 0;
}