#include <stdio.h>
int main (void)
{
    printf("\n\n");
    printf("***************************************************************************");
    printf("\n\n");
    printf("hello world !!!\n\n");
    int a = 13;
    printf("integer decimal value of 'a' = %d\n", a);
    printf("integer octal value of 'a' = %o\n", a);
    printf("integer hexadecimal value of 'a' (hexadecimal letters in lower case )= %x\n", a);
    printf("integer hexadecimal value of 'a' (hexadecimal letters in lover case )= %x\n\n", a);
    char ch = 'a';
    printf("character ch = %c\n", ch);
    char str[] = "nitesh's real time rendering batch ";
    printf("string str = %S\\n\n", str);
    long num = 30121995l;
    printf("long integer = % ld\n\n", num);
    unsigned int b = 7;
    printf("unsigned integer 'b' = %u\n\n", b);
    float f_num = 3012.1995f;
    printf("floating point number with just %%f 'f_num' = %f\n", f_num);
    printf("floating point number with %%4.2f 'f_num' = %4.2f\n", f_num);
    printf("floating point number with %%6.5f 'f_num' = %6.5f\n", f_num);
    double d_pi = 3.14159265358979323846;
    printf("double precision floating point number without exponential = %g\n,d_pi");
    printf("double precision floating point number with exponential (lower case ) = %e\n, d_pi");
    printf("double precision floating point number with exponential (upper case) = %e\n\n,d_pi");
    printf("double hexadecimal value of 'd_pi' (hexadecimal letters in lower case )= %a\n", d_pi);
    printf("double hexadecimal value of 'd_pi'(hexadecimal letters in upper case) = %a\n\n", d_pi);
    printf("**********************************************************************8\n");
    printf("\n\n");
    return 0;
}