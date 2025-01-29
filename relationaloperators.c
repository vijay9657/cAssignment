#include <stdio.h>
int main(void)
{
    //variable declarations 
    int a;
    int b;
    int result ;
    //code 
    printf("\n\n");
    printf("enter one intager :");
    printf("%d",&b);

    printf("\n\n");
    printf("enter another intager : ");
    printf("%d",&b);

    printf("\n\n");
    printf("if answer = 0,it is 'false'.\n");
    printf("if answer = 1, it is 'true'.\n\n");

    result = (a < b);
    printf("(a < b) a = %d is less than b = %d                   \t answer = %d\n", a ,b,result );

    result = (a > b );
    printf("(a > b) a = %d is grater than b = %d                 \t answer = %d\n",a , b, result);
    
    result = (a <= b);
    printf("(a <= b) a = %d is less than or equal to b = %d       \t answer =%d\n",a,b, result );

    result = (a >= b);
    printf("(a >= b) a = %d is grater than or equal to b = %d     \t answer =%d\n",a,b, result );

    result = (a == b );
    printf("(a == b) a = %d is equal to b = %d                    \t answer = %d\n",a,b, result );

    result = (a != b);
    printf("(a != b) a = %d is not equal to b = %d                \t answer = %d\n",a,b, result );
    return (0);
}