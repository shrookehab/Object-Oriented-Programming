#include <stdio.h>
#include <stdlib.h>

void str_copy(char *, char *);
int main()
{
    char source[50], destination[50];

    printf("Please enter the string : ");
    scanf("%s", &source);
    printf("\n==================================\n\n");

    str_copy(&destination, &source);

    printf("The Original String is : %s\n", source);
    printf("The Copied String is : %s\n", destination);

    return 0;
}

void str_copy(char *dest, char *src){

    int i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

}
