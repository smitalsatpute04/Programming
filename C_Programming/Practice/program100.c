#include <stdio.h>

int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    printf("Enter the elements\n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

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

time compelxity --> O(N) 
*/