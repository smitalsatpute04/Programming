#include <stdio.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    
    return iSum;
}

int main()
{
    int iCount = 0;
    int iLength = 4;

    int iRet= 0;

    int Brr[iLength];

    printf("Enter elements of array: \n");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        scanf("%d",&Brr[iCount]);
    }
    
    
    iRet = Summation(Brr,iLength);

    printf("\nSummation of elements is: %d",iRet);

    return 0;
}
/*
input: 
Enter elements of array:
10
20
30
40

output:
Summation of elements is: 100
*/