// Problem Statement : Accept 2 values from user and perform the addition.

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    STOP
*/

// Step 3: Decide the programming language (C/C++/Java/Python)
// We select C programming

// Step 4: Write the program

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Addition
//  Description :       It is used to perform addition of 2 integers
//  Input arguments :   Integer, Integer
//  Output :            Integer
//  Author :            Amir Ayaz Pathan
//  Date :              25/09/2023  
//
///////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;           // Variable to store the value of addition
    iSum = iNo1 + iNo2;
    return iSum;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry Point function of an application which perfmorms addition of 2 integers
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0;   // Variable to store first input
    auto int iValue2 = 0;   // Variable to store second input
    auto int iAns = 0;      // Variable to store the result
    
    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);  // Function call to perform addition

    printf("Addition is : %d\n",iAns);
    return 0;
}

// Step 5 : Test the code
/*
Test case 1 : 
Input : 10  11
Output : 21

Test case 2 : 
Input : 10  0
Output : 10

Test case 3 : 
Input : 12  -6
Output : 6

Test case 4 : 
Input : -6  -5
Output : -11
*/