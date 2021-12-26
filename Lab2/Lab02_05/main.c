#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 12, j = 12, num1 = 12;
    for(j; j >= 1; j--){
        i = 12;
        printf(" %d's Table\n", num1);
        printf("-----------\n");
        for (i; i >= 1; i--){

            printf(" %d * %d = %d \n", num1, i, num1*i);


        }
        printf("===============\n");
        num1--;
    }




    return 0;
}
