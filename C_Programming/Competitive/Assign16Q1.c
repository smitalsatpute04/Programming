/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and return largest number.
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :");
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("Largest number is %d",iRet);

    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element :44
Enter element :12
Enter element :54
Enter element :13
Enter element :57
Enter element :45

output: Largest number is 57
*/