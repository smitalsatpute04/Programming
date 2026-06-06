//Accept number from uder and display its digits 

import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit + "\t");

            iNo = iNo / 10; 
        }
    }
}

class program79
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);
    }
}
/*
input: 751
output: 1   5   7
*/