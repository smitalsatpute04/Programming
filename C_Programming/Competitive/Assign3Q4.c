/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept one character from user and convert its case (approach 1)
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("The Lowwer case of entered character is: %c", cValue);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("The Upper case of entered character is: %c", cValue);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter your letter: ");
    scanf("%c",&ch);
    
    DisplayConvert(ch);

    return 0;
}