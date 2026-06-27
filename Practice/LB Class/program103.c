#include<stdio.h>

// call back address -- Pointer
void CallByAddress(int *iptr)
{
    (*iptr)++;
}

int main()
{          
    int iValue = 11;

    CallByAddress(&iValue);

    printf("Value after function call : %d\n",iValue);

    return 0;
}