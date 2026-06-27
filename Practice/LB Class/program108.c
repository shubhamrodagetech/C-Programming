#include<stdio.h>
// code complete nahi zala
void Display(int Arr[])      
{
    printf("%d\n",*Arr);

    iPtr++;

    printf("%d\n",*Arr);

    iPtr++;

    printf("%d\n",*Arr);    
}

int main()
{          
    int Brr[5] = {10,20,30,40,50};

    printf("Base address of Arr : %d\n",Arr);

    Display(Brr);

    return 0;
}