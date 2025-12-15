#include<stdio.h>   //for printf , scanf

int CountFactors(int iNo)
{
    int iCnt = 0;   // for loop count
    int iFrequency = 0;

    if(iNo < 0) //for updater
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);
    printf("Number of Factors are : %d\n",iRet);

    return 0 ;
}