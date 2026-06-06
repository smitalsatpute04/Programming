#include <stdio.h>
#include<stdlib.h>

//TIME COMPLEXITY --> O(N) where N is value of iCnt
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]> iMax)
        {
           iMax = Arr[iCnt];
        }
    }

    return iMax;

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

    iRet = Maximum(Brr,iLength);

    printf("The largest number is : %d",iRet);

    free(Brr);

    return 0;
}
/*
input: Enter number of element: 5
Enter 5 elements
Enter element: 45
Enter element: 34
Enter element: 89
Enter element: 56
Enter element: 76
Enter the elements that you want to search :
34

output: Element is present

input: Enter number of element: 5
Enter 5 elements
Enter element: 12
Enter element: 34
Enter element: 22
Enter element: 56
Enter element: 43
Enter the elements that you want to search :
29

output: Element is not present
*/