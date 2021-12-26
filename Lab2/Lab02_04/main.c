#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, j = 1, num1 = 1;
    for(j; j <= 12; j++){
        i = 1;
        printf(" %d's Table\n", num1);
        printf("-----------\n");
        for (i; i <= 12; i++){

            printf(" %d * %d = %d \n", num1, i, num1*i);


        }
        printf("===============\n");
        num1++;
    }

    return 0;
}
