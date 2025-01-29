#include <stdio.h>
int main(void) {
    //variable declaration
    int a;
    int b;
    int c;
    int result;

    //code 
    printf("\n\n");
    printf("enter first intager : ");
    scanf("%d" ,&a);

    printf("\n\n");
    printf("enter second intager : ");
    scanf("%d" , &b);

    printf("\n\n");
    printf(" enter third intsger : ");
    scanf("%d", &c);

    printf("\n\n");
    printf("if answer = 0 , it is 'false'.\n");
    printf("if answer = 1, it is 'true'.\n");

    result = (a <= b) && (b != c);
    printf("logical and (&&) : answer is true (1) if and only if both conditionsare true . the answer is false  (0) , if any one or both conditions are false.\n\n");
    printf("a = %d is less than or equal to b = %d and b = %d is not equal to c = %d    \t answer %d\n\n",a,b,b,c,result);

    result = (b >= a) || (a == c);
    printf("logical or (||) : answer is false (0) if and only if both conditions are false . the answer is true (1) if any one or both conditions are true.\n\n");
    printf("either b = %d is grater than or equal to a = %d or a = %d is equal to c = %d   \t answer = %d\n\n",b,a,a,c,result);

    result = !a;
    printf("a = %d and using logical not (!) operator on a gives result = %d\n\n",a,result );

    result = !b;
    printf("b =%d and using logical not (!) operator on b gives result = %d\n\n",b, result );
    result = !c;
    printf("c = %d and using logical not (!) operator on c gives result = %d\n\n",c, result );

    result = (!(a <= b) && ! (b != c ));
    printf("using logical not (!) on (a <= b) and also on (b != c) and then anding them afterwards gives result = %d\n",result );

    printf("\n\n");

    result = !((b >= a) ||(a == c));
    printf("using logical not (!) on entire logical expression (b >= a) || (a == c) gives result = %d\n", result);
    printf("\n\n");
    return (0);
}