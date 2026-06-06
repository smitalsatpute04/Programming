/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and accept anothe number as NO, return frequency of NO from it.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength,int iValue)
{
    int iCnt = 0;
    int iElement = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement == iValue)
        {
            iFreq ++;
        }
    }

    return iFreq;
}

int main()
{
    int iNo = 0;
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    printf("Enter your favourite elements :");
    scanf("%d", &iNo);
    

    iRet = Frequency(p, iSize,iNo);

    printf("Your favourite element %d occurs %d times",iNo, iRet);

    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element: 10
Enter element: 20
Enter element: 30
Enter element: 10
Enter element: 10
Enter element: 40
Enter your favourite elements :10

output: Your favourite element 10 occurs 3 times

input:Enter number of elements :5
Enter 5 elements
Enter element: 11
Enter element: 22
Enter element: 33
Enter element: 44
Enter element: 55
Enter your favourite elements :66

output: Your favourite element 66 occurs 0 times 
*/