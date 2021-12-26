#include <stdio.h>
#include <stdlib.h>

int PowerCalc(int , int);

int main()
{
    int number = 0, num_pow = 0, result = 0;

    printf("Please enter the number : ");
    scanf("%d", &number);

    printf("\n");

    printf("Please enter the power :");
    scanf("%d", &num_pow);

    printf("\n\n");

    result = PowerCalc(number, num_pow);
    printf("The Result is : %d\n", result);


    return 0;
}

int PowerCalc(int num, int pow){

    if (pow == 0)
        return 1;

    if (pow % 2 == 0)
        return PowerCalc(num, pow / 2) * PowerCalc(num, pow / 2);

    else
        return num * PowerCalc(num, (pow - 1) / 2) * PowerCalc(num, (pow - 1) / 2);

}

