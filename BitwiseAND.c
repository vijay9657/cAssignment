#include <stdio.h>
int main(void)
{
    void PrintBnaryFormOfNumber(unsigned int);

    unsigned int a;
    unsigned int b;
    unsigned int result;

    printf("\n\n");
    printf("Enter an integer =");
    scanf("%u", &a);

    printf("\n\n");
    printf("Enter another Integer : ");
    scanf("%u", &b);

    printf("\n\n");
    result = a & b;
    printf("Bitwise AND-ing of \n A=%d (Decimal) and B= %d decimal) result %d (Decimal).\n\n", a, b, result);

    PrintBinaryFormOfNumber(a);
    PrintBnaryFormOfNumber(b);
    PrintBnaryFormOfNumber(result);

    return (0);
}
void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    unsigned int quotient, remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    for (i = 0; i < 8; i++)
        binary_array[i] = 0;
    printf("the binary from of the decimal intager %d is \t=\t ",decimal_number);
num = decimal_number;
i = 7;
while (num !=0)
{
    quotient = num / 2;
    remainder = num % 2;
    binary_array[i] = remainder ;
    num = quotient;
    i--;
}
for (i = 0; i < 8; i++)
printf("%u", binary_array[i]);
prointf("\n\n");
}