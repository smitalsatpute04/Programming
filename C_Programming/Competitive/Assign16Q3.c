/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and return difference between largest and smallest number.
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax - iMin;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of element: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("The diff btw largest and smallest element is: %d ",iRet);

    free(p);

    return 0;
}
/*
input: Enter number of element: 5
Enter element: 20
Enter element: 21
Enter element: 40
Enter element: 23
Enter element: 32

output: The diff btw largest and smallest element is: 20
*/