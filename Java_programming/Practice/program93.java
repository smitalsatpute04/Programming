//Accept number from user and check whether it is palindrome or not

import java.util.*;

class DigitX
{
    public boolean ChkPallindrome(int iNo)
    {
        int iTemp = 0;  

        iTemp = iNo;        //backup Xerox of iNo
        
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo %  10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10; 
        }

        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program93
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        bRet = dobj.ChkPallindrome(iValue);

        if(bRet == true)
        {
            System.out.println("\nNumber is pallindrome ");
        }
        else
        {
            System.out.println("\nNumber is not pallindrome ");   
        }
        
    }
}
/*
input: Enter number: 212
output: Number is pallindrome

input: Enter number: 135
output: Number is not pallindrome
*/