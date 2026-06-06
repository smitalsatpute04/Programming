//Accept number from user and display the count of even And odd digits

import java.util.*;

class DigitX
{
    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCountOdd++;
            }

            if(iDigit % 2 == 0)   // or we can give else statement also
            {
                iCountEven++;
            }

            iNo = iNo / 10; 
        }

        System.out.println("The count of even digits is :" +iCountEven);
        System.out.println("The count of odd digits is: "+iCountOdd);

    }
}

class program88
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
   

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        dobj.CountEvenOddDigits(iValue);

    }
}
/*
input:  Enter number: 1234567
output: The count of even digits is : 3
        The count of odd digits is: 4
*/