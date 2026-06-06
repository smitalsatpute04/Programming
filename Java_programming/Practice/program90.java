//Accept number from user and display summation of even digits

import java.util.*;

class DigitX
{
    public int SumEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSum = iSum + iDigit;
            }

            iNo = iNo / 10; 
        }

        return iSum;
    }
}

class program90
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        iRet = dobj.SumEvenDigits(iValue);

        System.out.println("\nSummation of even digit is : "+iRet);
    }
}
/*
input:  Enter number: 123456
output: Summation of even digit is : 12 --> (2+4+6)
*/