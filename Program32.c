#include<stdio.h>

void Display()
{
    int iCnt = 0;
    int iNo = 5;

    //      1           2       3    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Hey wassup...\n");  // 4
    }  
}

int main()
{
    Display();

    return 0;
}