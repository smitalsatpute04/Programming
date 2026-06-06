// Type 3

import java.util.*;

class NumberX
{
    public static boolean CheckDivisible(int iNo)    
    {
        if((iNo % 3 == 0)&&(iNo % 5 == 0))
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}

class program44
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        bRet = NumberX.CheckDivisible(iValue);              //no error
        
        if (bRet == true)
        {
            System.out.println("Number is divisible by 3 and 5");
        }

        else
        {
             System.out.println("Number is not divisible by 3 and 5");
            
        }

    }
}
