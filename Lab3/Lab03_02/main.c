#include <stdio.h>
#include <stdlib.h>

struct Employee {

    int code;
    char name[50];
    float net_salary;

};
int main()
{
    struct Employee emp;

    printf("Please enter the Employee code : \n");
    scanf("%d", &emp.code);

    printf("Please enter the Employee name : \n");
    //gets(&emp.name);
    scanf("%s", &emp.name);

    printf("Please enter the Employee net salary : \n");
    scanf("%f", &emp.net_salary);

    printf("============================================================ \n\n");

    printf("The Employee code is : %d\n", emp.code);

    printf("The Employee name is : %s\n", emp.name);

    printf("The Employee net salary is : %f\n", emp.net_salary);


    return 0;
}
