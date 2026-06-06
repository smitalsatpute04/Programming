#include <stdio.h>

int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);   
    }

    printf("Elements of array are: \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
/*
input: Enter the elements
11
21
51
101
111
output: Elements of array are: 
11
21
51
101
111

time complexity --> O(2N) becuase 2 loops
*/