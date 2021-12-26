#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    int id;
    char name[50];
    float net_salary;
}Employee;
//typedef struct Employee Employee;
void read_employee(Employee *, int);
void print_employee(Employee *, int);

int main()
{
    Employee *eptr;
    int size;

    printf("Please enter the total number of employees :");
    scanf("%d", &size);

    eptr = (Employee *) calloc(size, sizeof(Employee));

    printf("\n\nPlease enter the Employees Information :) \n\n=============================\n");

    read_employee(eptr, size);
    print_employee(eptr, size);

    free(eptr);


    return 0;
}

void read_employee(Employee *eptr, int size){

    int i;

    for(i = 0; (eptr != NULL && i < size); i++){

        printf("Employee number %d : \n\n", i + 1);

        printf("\tPlease enter employee id :");
        scanf("%d", &eptr[i].id);
        printf("\n");

        printf("\tPlease enter employee name :");
        scanf("%s", &eptr[i].name);
        printf("\n");

        printf("\tPlease enter employee net salary :");
        scanf("%f", &eptr[i].net_salary);
        printf("\n====================================\n\n");

    }


}
void print_employee(Employee *eptr, int size){

    int i;

    for(i = 0; (eptr != NULL && i < size); i++){

        printf("Employee number %d : \n\n", i + 1);

        printf("\tEmployee id is : %d\n", eptr[i].id);

        printf("\tEmployee name is : %s\n", eptr[i].name);

        printf("\tEmployee net salary is : %f\n", eptr[i].net_salary);
        printf("\n====================================\n\n");

    }

}
