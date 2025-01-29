#include <stdio.h>
int iseven(int num)
{
    if (num % 2 == 0)
        return 1;
}
return 0;
}
int add(int none, ntwo){
    return none+ntwo;
}
int minus(int none, int ntwo){
    return none-ntwo;
}
int main (){
    int a=34;
    int b=234;
    int c=23421;
    int d=3215502;
    if (iseven(a)){
        int result=add(a,b);
        if (is even(c)){
            int r=minus(c,d);
            printf("%d",r+result);
        }else{
            int r=add(c,d);
            printf("%d",r+result);
        }
    }else{
        int result=minus(a,b);
        return 0;
    }