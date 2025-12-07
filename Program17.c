#include<stdio.h>    //for i/o printf, scanf
#include<stdbool.h>   //for the bool only

bool CheckEvenOdd(int iNo)
{
   int iRet = 0;

   iRet = iNo % 2;

   if(iNo % 2 == 0)
   { 
       return true;
    }
   else
   {
       return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { 
        printf("%d is even number \n",iValue);
    }
    else
    { 
        printf("%d is odd number \n",iValue); 
    }
    
    return 0;
}