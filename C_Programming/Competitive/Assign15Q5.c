/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and return product of odd elements.
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;
    int iMul = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement % 2 != 0)
        {
            iMul = iMul * iElement;
        }
    }        

    return iMul;
}

int main()
{
    int iRet = 0;
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d  elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product of odd elements is %d",iRet);

    return 0;
}
/*
input: Enter number of elements: 6
Enter 6  elements
Enter element: 12
Enter element: 13
Enter element: 3
Enter element: 55
Enter element: 6
Enter element: 32

output: Product of odd elements is 2145

*/