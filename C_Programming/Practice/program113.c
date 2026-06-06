//Program of pointer

#include <stdio.h>

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
   
}

int main()
{
    int Brr[4] = {10,20,30,40};
    
    
    Display(Brr);

    return 0;
}
/*
output:
10
20
30
40
4194432 -> garbage value
6422288 -> garbage value
6422356 -> garbage value
4199048 -> garbage value
*/