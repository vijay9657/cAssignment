#include <stdio.h>
int main(void)
{
    void printbinaryfromnumber(unsigned int);
    unsigned int a;
    unsigned int b;
    unsigned int result;
    printf("\n\n");
    printf("enter an intager =");
    scanf("%u", &a);
    printf("\n\n");
    printf("enter another intager = ");
    scanf("%u", &b);
    printf("\n\n\n\n");
    result = a ^ b;
    printf("bitwise xor-ing of \na = %d (decimal) and b = %d (decimal) gives result %d (decimal).\n\n", a, b, result);
    printbinaryfromnumber(a);
    printbinaryfromnumber(b);
    printbinaryfromnumber(result);
    return (0);
}
void printbinaryfromnumber(unsigned int decimal_number)
{
    unsigned int quotient, remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;
    for (i = 0; i < 8; i++)
        binary_array[i] = 0;
    printf("the binary form of the decimal intager %d is\t=\t", decimal_number);
    num = decimal_number;
    i = 7;
    while (num != 0)
    {
        quotient = num / 2;
        remainder = num % 2;
        binary_array[i] = remainder;
        num = quotient;
        i--;
    }
    for (i = 0; i < 8; i++)
        printf("%u", binary_array[i]);
    printf("\n\n");
}
