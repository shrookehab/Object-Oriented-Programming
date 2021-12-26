#include <stdio.h>
#include <stdlib.h>

void swap_num(int*, int*);

int main()
{
    int num1, num2;

    printf("Please enter number 1 : ");
    scanf("%d", &num1);
    printf("\n");
    printf("Please enter number 2 : ");
    scanf("%d", &num2);
    printf("\n===============================\n\n");

    printf("The 2 numbers after swapping \n\n");

    swap4(&num1, &num2);

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    printf("\n===============================\n\n");

    swap3(&num1, &num2);

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    printf("\n===============================\n\n");

    swap2(&num1, &num2);

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    printf("\n===============================\n\n");

    swap_num(&num1, &num2);

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    printf("\n===============================\n\n");

    return 0;
}
void swap_num(int *num1, int *num2){

    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
void swap2(int *num1, int *num2){
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}
void swap3(int *num1, int *num2){
    *num1 = *num1 * (*num2);
    *num2 = *num1 / *num2;
    *num1 = *num1 / *num2;
}
void swap4(int *num1, int *num2){
    *num1 = (*num1 & *num2) + (*num1 | *num2);
    *num2 = *num1 + (~ *num2) + 1;
    *num1 = *num1 + (~ *num2) + 1;
}
