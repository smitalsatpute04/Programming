//Accept number from uder and display its digits and count of its digits

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
            System.out.print(iDigit + "\t");

            iNo = iNo / 10; 

            iCount++;
        }

        return iCount;
    }
}

class program83
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

        System.out.println("\nNumber of digits: "+iRet);
    }
}
/*
input: 751
output: 1   5   7
        Number of digits: 3
*/