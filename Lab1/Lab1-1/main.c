#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;
    printf("Please enter a character : ");
    scanf("%c ", &c);
    printf("Character is : %c and its hexadecimal is : %x \n", c, c);

    return 0;
}
