#include <stdio.h>
int main (void)
{
    // variable declarations
    int a;
    int b;
    int x;
    // code
    printf("\n\n");
    printf("enter a number : ");
    scanf("%d", &b);
    printf("\n\n");
    // since, in all the folowing 5 cases, the operand on the left 'a' is getting repeated immeiately on the right (e.g : a=a +b or a  = a- b),
    // we are using compound assignment operators +=,-=,*=,/= and %=
    // since , 'a' will be assigned the value of (a + b ) at the expression (a += b),we must save original value of 'a' to another variable (x)
    x = a;
    a += b; // a = a + b
    printf("addition of a = %d and b = %d gives %d.\n", x, b, a);
    // value of 'a' altered in the above expression is used here ...
    // since , 'a' will be assigned the value of (a - b) at expression (a -= b ),we must save the original value of 'a' to another variable (x)
    x = a;
    printf("subtraction of a = %d and b = %d gives .\n", x, b, a);
    // value of 'a' altered in the above expression is used here...
    // since , 'a' will be assigned the value of (a *b ) at the expession (a /= b ),we must save the original value of 'a' to another variable (x)
    x = a;
    a *= b; // a = a * b
    printf("multiplication of a = %d and b = %d gives %d.\n", x, b, a);
    // value of 'a' altered in the above expression is used here...
    // since , 'a' will be assigned the value of (a / b )at the expression (a/= b),we must save the original value of 'a' another variable (x)
    x = a;
    a %= b; // a = a % b
    printf("division of a = %d and b = %d gives quotient  %d.\n", x, b, a);
    // value of 'a' altered in the above expression is used here...
    // since , 'a' will be assigned the value of (a % b) at the exprssion (a %= b ), we must save the original value of 'a' to another variable (x)
    x = a;
    a %= b; // a = a % b
    printf("divition of a = %d and b =%d gives remainder %d.\n", x, b, a);
    printf("\n\n");
    return (0);
}