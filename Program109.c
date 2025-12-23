#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    printf("%d\n", Arr);    //same o\p
    printf("%d\n", &Arr);   //Same o\p
    printf("%d\n", &Arr[0]);   //Same o\p
    printf("%d\n", sizeof(Arr));

    return 0;
}