/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and display all such elements which contains 3 digits in it.
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int Sum[iLength];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit= Arr[iCnt] % 10;

            iSum = iSum + iDigit;

            Arr[iCnt] = Arr[iCnt] / 10;
        }    

        Sum[iCnt] = iSum;
        printf("%d\t",iSum);

        iSum = 0;
    }

    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element :");
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}