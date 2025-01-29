#include <stdio.h>
int main(void)
{
    // variable declarations
    int a;
    int b;
    int result;
    // code
    printf("\n\n");
    printf("enter anumber : ");
    scanf("%d", &a);
    printf("\n\n");
    //*** the following are the 5 arithmetic operators +,-,*,/ and %***
    //*** also ,the resultants of the arithmetic operations in all the below five cases have been assigned to the variable 'result' using the assignment
    result = a + b;
    printf("addition of a = %d and b = %d gives %d.\n", a, b, result);
    result = a - b;
    printf("subtraction of a  %d and b = gives %d.\n", a, b, result);
    result = a * b;
    printf("multiplication of a = %d and b = %d gives quotient %d.\n", a, b, result);
    result = a % b;
    printf("division of a = %d and b = %d gives remainder %d.\n",a, b, result);
    printf("\n\n");
    return (0);
}