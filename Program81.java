// for enter negative number

import java.util.*; 

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int i = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(i = 1 ; i <= (iNo /2); i++)
        {
            if(iNo % i ==0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

} //End of number class

class Program81
{
    public static void main(String A[]) // Commant line Argument
    {
        int iValue = 0;
        boolean bRet = false;  //to accept the return value

        Scanner sobj = new Scanner(System.in);  //Object
        
        System.out.println("Enter a number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();   //Object
        //nobj.DisplayFactors(iValue);
        bRet = nobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is Perfect Number");
        }
        else
        {
            System.out.println(iValue+ " is not a perfect number");
        }
        sobj = null;
        nobj = null;

        System.gc();

    }
}