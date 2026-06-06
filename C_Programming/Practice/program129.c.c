#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;

}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of element: ");
    scanf("%d",&iLength);

    Brr = (int*)malloc(iLength * sizeof(int));

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &Brr[iCnt]);
    }

    bRet = LinearSearch(Brr,iLength);

    if(bRet == TRUE)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}
/*
input: Enter number of element: 5
Enter 5 elements
Enter element: 1
Enter element: 11
Enter element: 23
Enter element: 12
Enter element: 13

output: Element is present
*/