#include<stdio.h>

void Display(int Arr[])      
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 8; iCnt++)       // 5 convert 8 because size 8 ahe line 15 la
    {
        printf("%d\n",Arr[iCnt]);
    }    
}

int main()
{          
    int Brr[8] = {10,20,30,40,50,60,70,80};        

    Display(Brr);

    return 0;
}