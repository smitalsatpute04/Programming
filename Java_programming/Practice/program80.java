//Accept number from uder and display its digits without local variable

import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {

        while(iNo != 0)
        {
            System.out.print(iNo % 10 + "\t");

            iNo = iNo / 10; 
        }
    }
}

class program80
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