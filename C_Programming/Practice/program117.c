//Program of pointer

#include <stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
   
}

int main()
{
    int iCount = 0;
    int iLength = 4;

    int Brr[iLength];

    printf("Enter elements of array: \n");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        scanf("%d",&Brr[iCount]);
    }
    
    
    Display(Brr,iLength);

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
10
20
30
40
*/