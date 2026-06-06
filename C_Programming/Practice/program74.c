//input : 5
//output: 5   4   3   2   1
#include<stdio.h>

int main()
{
    int iNo = 0;
    iNo = 5;

    while(iNo >= 1 )
    {
        printf("%d\t",iNo);
        iNo--;
    }

    return 0;
}