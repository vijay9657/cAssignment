#include <stdio.h>
#define my_pi 3.1415926535897932
#define amc_string "nitesh rtr"
// if first constant is not assigned a value,it is assume to be 0 i.e: 'sunday will be 0
// and the rest of the constant are assigned consecutive integer values from 0 onwards i.e: 'monday' will be 1,'tuesday' will be 2,and so on...
// un-named enum
enum
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
enum
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};
// named enums
enum numbers
{
    one,
    two,
    three,
    four,
    five = 5,
    six,
    seven,
    eight,
    nine,
    ten
};
enum boolean
{
    true = 1,
    false = 0
};
int main(void)
{
    // local constant declarations
    const double epsilon = 0.000001;
    // code
    printf("\n\n");
    printf("local constant epsilon = %1f\n\n", epsilon);
    printf("sunday is day number = %d\n", sunday);
    printf("monday is day number = %d\n", monday);
    printf("tuesday is day number = %d\n", tuesday);
    printf("wednesday is day number = %d\n", wednesday);
    printf("thursday is day number = %d\n", thursday);
    printf("saturday is day number = %d\n\n", saturday);
    printf("one is enum number  = %d\n", one);
    printf("two is enum number = %d\n", two);
    printf("three is enum number = %d\n", three);
    printf("four is enum number  = %d\n", four);
    printf("five is enum number = %d\n", five);
    printf("six is enum number = %d\n", six);
    printf("seven is enum number = %d\n", seven);
    printf("eight is enum number  = %d\n", eight);
    printf("nine is enum number = %d\n", nine);
    printf("ten is enum number = %d\n", ten);
    printf("january is month number = %d\n", january);
    printf("february is month number = %d\n", february);
    printf("march is month number = %d\n", march);
    printf("april is month number = %d\n", april);
    printf("may is month number = %d\n", may);
    printf("june is month number = %d\n", june);
    printf("july is month number = %d\n", july);
    printf("august is month number = %d\n", august);
    printf("november is month number = %d\n", november);
    printf("december is month number = %d\n", december);
    printf("value of true is = %d\n", true),
        printf("value of false is = %d\n", false);
    printf("my_pi macro value = %.10if\n\n", my_pi);
    printf("value of cicle of radius 2 units = %f\n\n", (my_pi * 2.0f * 2.0f)); // pi *r * r = area of circle of radius'r'
    printf("\n\n");
    printf("amc_string is : %s\n", amc_string);
    printf("\n\n");
    return (0);
}