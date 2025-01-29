#include<stdio.h>
int main (void)
{
    printf("\n\n");
    printf("going on to next line ...using \\n escape sequence\n\n");
    printf("demonstrating \t horizotal \t tab \t \\t escape sequence !!!\n\n");
    printf("this is a double quoted output\"done using \\\"\\\"escape sequence\n\n");
    printf("this is a singal quoted output\' done using \\\'\\\' escape sequence\n\n");
    printf("backspace turned to backspace\b using escape sequence \\b\n\n");
    printf("\r demonstrating carriage return using \\r escape sequence \n");
    printf("demonstreting \r carriage return using  \\r escape sequence\n");
    printf("demonstreting carriage \r return using \\r escape sequence \n\n");
    printf("demonstating \x41 using \\xhh escape sequence \n\n);) //0x41 is the hexadecimal code for letter 'a'.'xhh' is the place-holder for 'x' followed by 2 digits (hh),altogrther forming a hexadecimal number. 
    printf("demonstrating \102 using \\ooo escape sequence\n\n"); //102 is the octal code for letter 'b'.'ooo'is the place -holder for 3 digits forming an octaL number.
    return (0);
    }