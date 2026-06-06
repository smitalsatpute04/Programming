/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and return smallest number.
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iSize =0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element: ");
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest number is %d",iRet);

    free(p);

    return 0;
}
/*
input: Enter number of elements : 5
Enter 5 elements
Enter element: 11
Enter element: 12
Enter element: 13
Enter element: 14
Enter element: 15

output: Smallest number is 11
*/