
//Checked Exception

//import java.util.*;
import java.io.*;   //For BufferedReader

class Program74
{
    public static void main(String A[])
    {
        int iNo = 0;
        int i = 0;

        //Scanner sobj = new Scanner(System.in);
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.println("Enter a number :");
       
        //iNo = sobj.nextInt();
        iNo = Integer.parseInt(bobj.readLine());

        for(i = 1; i <=(iNo/2); i++)
        {
            if(iNo % i == 0)
            {
                System.out.println(i);
            }
        }
    }
}