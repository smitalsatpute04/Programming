// get input from user and check whether the number is prime or not 


import java.util.*;

class NumberX
{
   public boolean CheckPrime(int iNo)
   {
        //Logic
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)   
        {
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
            
        }
        
        return bFlag;
   }
}

class program68
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();                  // object creation of class NumberX
        bRet = nobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("It is prime");
        }    
        else
        {
            System.out.println("It is not prime");
        }     
    }
}

// time complexity : O(N/2)
// where N >= 0