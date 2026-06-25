// Accept amount in US dollar and return its corresponding value in Indian currency Consider 1$ as 70 rupees.
// Input : 10
// Output : 700
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    if(iNo)
    {
        iCnt = iNo * 70;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("US Dollar to Indis currency is : %d\n",iRet);

    return 0;
}