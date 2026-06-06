/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and return difference btw summation of even elements and
//              summation of odd elements.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;
    int iAdd = 0;
    int iSum = 0;

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement % 2 == 0)
        {
            iAdd = iAdd + iElement;
        }
        else
        {
            iSum = iSum + iElement;
        }
    }

    return iAdd - iSum;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element: ");
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element: 1
Enter element: 2
Enter element: 3
Enter element: 4
Enter element: 5
Enter element: 6

output: Result is 3
*/