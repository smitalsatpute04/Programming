// get input from user and display the sum of its factors

import java.util.*;

class NumberX
{
   public int SumFactors(int iNo)
   {
        //Logic
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)   // it reduces timecomplexity( i.e., no. of iteration)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;                
            }
            
        }
        return iSum;
   }
}

class program49
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();                  // object creation of class NumberX
        iRet = nobj.SumFactors(iValue);

        System.out.println("Summation of factors: "+iRet);
    }
}

// time complexity : O(N/2)
// where N >= 0