#include <stdio.h>
int main (void)
{
void printbinaryfromofnumber(unsigned int);
unsigned int  a;
unsigned int result;
printf("\n\n");
printf("enter an intager = ");
scanf("%u",&a);
printf("\n\n\n\n");
result = ~a;
printf("bitwise complementing of \na = %d (decimal) gives result %d (decimal).\n\n ",a,result);
printbinaryfromofnumber(a);
printbinaryfromofnumber(result);
return (0);
}
void printbinaryfromofnumber(unsigned int decimal_number)
{
    unsigned int quotint, remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;
    for (i = 0; i< 8; i++)
    binary_array[i] =0;
    printf("the binary form of the decimal intager %d is\t=\t", decimal_number);
    num = decimal_number;
    i = 7;
    while (num != 0)
    {
    quotint = num / 2;
    remainder = num % 2;
    binary_array[i] = remainder;
    num = quotint;
    i--;
    }
    for (i = 0; i < 8; i++)
    printf("%u",binary_array[i]);
    printf("\n\n");
}