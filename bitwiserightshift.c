#include <stdio.h>
int main(void)
{
    void printbinaryfromofnumber(unsigned int);
    unsigned int a;
    unsigned int num_bits;
    unsigned int result;
    printf("\n\n");
    printf("enter an entager = ");
    scanf("%u", &a);
    printf("\n\n");
    printf("by how many bits do want to shift a = %d to the right ? ", a);
    scanf("%u", &num_bits);
    printf("\n\n\n\n");
    result = a >> num_bits;
    printf("bitwise right-shifting a = %d by %d bits \ngives the result = %d (decimal).\n\n", a, num_bits, result);
    printbinaryformofnumber(a);
    printbinaryfromofnumber(result);
    return (0);
}
void printbinaryfromofnumber(unsigned int decimal_number)
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