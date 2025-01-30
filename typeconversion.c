#include <stdio.h>
int main(void)
{
    int i, j;
    char ch_01, ch_02;
    int a, result_int;
    float f, result_float;
    int i_explicit;
    float f_explicit;
    printf("\n\n");
    i = 70;
    ch_01 = i;
    printf("i - %d\n", i);
    printf("chareter 1 (after ch_01 = i) = %c\n\n", ch_01);
    ch_02 = 'q';
    j = ch_02;
    printf("chareter 2 - %c\n", ch_02);
    printf("j (after j = ch_02) = %d\n\n", j);
    a = 5;
    f = 7.8f;
    result_float = a + f;
    printf("intager a = %d and floating-point number %f added gives floating-point sum = %f\n\n", a, f, result_float);
    result_float = a + f;
    printf("intager a = %d and floating-point number %f added gives intager sum = %d\n\n", a, f, result_float);
    f_explicit = 30.121995f;
    i_explicit = (int)f_explicit;
    printf("floating point number wich will be type casted explicity = %f\n", f_explicit);
    printf("resultant intager after explicit type casting of %f = %d\n\n", f_explicit, i_explicit);
    return (0);
}
