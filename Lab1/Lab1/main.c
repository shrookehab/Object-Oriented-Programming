#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 100;
    printf("number as integer : %d \n", num);
    printf("number as float : %f \n", (float)num);
    printf("number as char : %c \n", num);
    printf("number as hexadecimal : %x \n", num);
    printf("number as octal : %o \n", num);

    int x =5, y;

    y = x++;
    printf("x = %d and y = %d \n", x, y);
    y = ++x;
    printf("x = %d and y = %d \n", x, y);

    return 0;
}
