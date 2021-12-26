#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Employee {

    int code;
    char name[50];
    float net_salary;

};

int main()
{

    struct Employee emp[SIZE];
    int i;

    for (i = 0; i < SIZE; i++){
        printf("Please enter the Employee %d code : \n", i + 1);
        scanf("%d", &emp[i].code);

        printf("Please enter the Employee %d name : \n", i + 1);
        //gets(&emp.name);
        scanf("%s", &emp[i].name);

        printf("Please enter the Employee %d net salary : \n", i + 1);
        scanf("%f", &emp[i].net_salary);

        printf("\n");

    }

    printf("============================================================ \n\n");

    for (i = 0; i < SIZE; i++){

        printf("The Employee %d code is : %d\n", i + 1, emp[i].code);

        printf("The Employee %d name is : %s\n", i + 1, emp[i].name);

        printf("The Employee %d net salary is : %f\n", i + 1, emp[i].net_salary);

        printf("\n");


    }


    return 0;
}
