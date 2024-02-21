#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 4)
    {
        printf("Hey Wassup...\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("Hey Wassup...\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}