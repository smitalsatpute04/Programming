/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return the count of even digits.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d ", iDigit);

        if(iDigit % 2 == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;        
    }  
    

    return iCnt;


}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iNo);
    
    iRet = CountEven(iNo);
    
    printf("\neven digit count is %d",iRet);


    return 0;
}
/*
input: Enter number: 2635
output: 5 3 6 2
       even digit count is 2

time complexcity --> O(log N)       
*/