/*
    Step 1 : Understand the problem statement.
    Step 2 : Write the algorithm.
    Step 3 : Decide the programming language.
    step 4 : Write the Program.
    Step 5: Test the program.
*/

/*
    Algorithm

    START 
        Accept First number as no1
        Accept second number as no2
        If the input is -ve then the convert it into +ve
        perform Addition of no1 and no2
        Display the Addition on console/screen
    STOP
*/    

#include<stdio.h>

float AdditionTwoNumbers(float fNo1 , float fNo2)
{
    float fSum = 0;
    //Updater
    if(fNo1< 0.0f)
    {
        fNo1 = - fNo1;
    }

    //Uppdater 
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2; 
    }

    fSum = fNo1 + fNo2;   //Bussiness Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is : %f", fRet);
    return 0 ;
}