/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept one character from user and convert its case (approach 2)
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>


void DisplayConvert(char cValue)
{
    if(isupper(cValue))
    {
        printf("The Lowwer case of entered character is: %c", tolower(cValue));
    }
    else if(islower(cValue))
    {
        printf("The Upper case of entered character is: %c", toupper(cValue));
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