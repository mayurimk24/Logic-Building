#include<stdio.h>   //for printf , scanf

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0,iFrequency1 = 0, iFrequency2 = 0;

    if(iNo < 0) //for updater
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }
    printf("number of Factors are: %d\n",iFrequency1);
    printf("number of Non Factors are: %d\n",iFrequency2);
}
//Time Complexity = O(N)
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CountFactorsNonFactors(iValue);
    
    return 0 ;
}