#include<stdio.h>
// call back value
// call back address -- Pointer
void CallByValue(int iNo)
{
    iNo++;
}

int main()
{          
    int iValue = 11;

    CallByValue(iValue);

    printf("Value after function call : %d\n",iValue);

    return 0;
}