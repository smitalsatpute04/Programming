#include <stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;

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

    iRet = CountEven(Brr,iLength);

    printf("Even elements are %d",iRet);

    free(Brr);

    return 0;
}
/*
input: Enter number of element: 5
Enter 5 elements
Enter element: 10
Enter element: 11
Enter element: 15
Enter element: 14
Enter element: 21

output: Even elements are 2
*/