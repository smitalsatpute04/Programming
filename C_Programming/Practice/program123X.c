#include <stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
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
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of element: ");
    scanf("%d",&iLength);

    Brr = (int*)malloc(iLength * sizeof(int));

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Summation(Brr,iLength);

    printf("Summation is %d",iRet);

    free(Brr);

    return 0;
}
/*
input: Enter number of element: 6
Enter 6 elements
Enter element: 1
Enter element: 2
Enter element: 3
Enter element: 4
Enter element: 5
Enter element: 6

output: Summation is 21
*/