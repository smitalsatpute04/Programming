//Accept number from user and reserve that number

import java.util.*;

class DigitX
{
    public int RevNumber(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo %  10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10; 
        }

        return iRev;
    }
}

class program92
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        iRet = dobj.RevNumber(iValue);

        System.out.println("\nReverse number is : "+iRet);
    }
}
/*
input:  Enter number: 1234
output: Reverse number is : 4321

input: Enter number: 790
output: Reverse number is : 97

input: Enter number: 604
output: Reverse number is : 406
*/