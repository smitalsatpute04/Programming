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

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100)&&(Arr[iCnt]<=999))
        {
            printf("%d\t",Arr[iCnt]);
        }
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
/*
input: Enter number of elements :5
Enter element :121
Enter element :3453
Enter element :342
Enter element :674
Enter element :3445

output: 121     342     674
*/