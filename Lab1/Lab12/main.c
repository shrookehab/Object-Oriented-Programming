#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    printf("Please enter a number : \n");
    scanf("%d ", &num);
    printf("number as hexadecimal : %x \n", num);
    printf("number as octal : %o \n", num);
    printf("number as binary : %u \n", num);

    return 0;
}
