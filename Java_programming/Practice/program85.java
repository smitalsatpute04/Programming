//Accept number from user and display the frequency of digit 7 in it

import java.util.*;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 7)
            {
                iCount++;
            }

            iNo = iNo / 10; 
        }

        return iCount;
    }
}

class program85
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);

        System.out.println("\nNumber of digit 7: "+iRet);
    }
}
/*
input:  Enter number: 7898776
output: Number of digit 7: 3

here we calculate only how many times digit 7 is there in given input number
*/