/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept one character from user and check if its vowel or not (approach 2)
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL ChkVowel(char ch)
{    
    if(ch>= 'A' && ch <= 'Z')
    {  
        ch = ch + 32;

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == 1)
    {
        printf(" Its Vowel!!");
    }
    else
    {
        printf("Its Not Vowel");
    }
    return 0;
}