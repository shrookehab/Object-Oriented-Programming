#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {

    int code;
    char name[50];
    float net_salary;

};

struct Employee read_emp(int, char[], float);
void display_emp(struct Employee);

int main()
{
    int code1;
    char name1[50];
    float net_sal;
    struct Employee emp;

    printf("Please enter the Employee code : \n");
    scanf("%d", &code1);

    printf("Please enter the Employee name : \n");
    scanf("%s", &name1);

    printf("Please enter the Employee net salary : \n");
    scanf("%f", &net_sal);

    printf("============================================================ \n\n");

    emp = read_emp(code1, name1, net_sal);
    display_emp(emp);


    return 0;
}

struct Employee read_emp(int code1, char name1[50], float net_sal){

    struct Employee e;

    e.code = code1;
    strcpy(e.name, name1);
    e.net_salary = net_sal;

    return e;
}
void display_emp(struct Employee e){

    printf("The Employee code is : %d\n", e.code);

    printf("The Employee name is : %s\n", e.name);

    printf("The Employee net salary is : %f\n", e.net_salary);

}
