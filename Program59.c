#include<stdio.h>  
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;   //bool is default false

    if(iNo < 0) //updater
    {
        iNo = - iNo;
    }


    
    for(iCnt = 2,bFlag = true; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {   
            bFlag = false;
            break;           //Optimization
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is a not a prime number",iValue);
    }
    
    return 0 ;
}


/*
    Time Complexity for prime : N/2
    Time Complexity for non prime : either 1 or  2
*/