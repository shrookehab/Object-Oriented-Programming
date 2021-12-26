#include <stdio.h>
#include <stdlib.h>

void read_string(char **, int, int);
void print_string(char **, int);


int main()
{

    char **ptr_char;
    int size1, size2, i;

    printf("Please enter the total number of strings :");
    scanf("%d", &size1);
    printf("\n");

    ptr_char = (char **) calloc(size1, sizeof(char *));

    for(i = 0; (ptr_char != NULL && i < size1); i++){

        printf("Please enter the size of string number %d : ", i + 1);
        scanf("%d", &size2);
        printf("\n");

        ptr_char[i] = (char *) calloc(size2, sizeof(char));
        read_string(ptr_char[i], i, size2);

    }

    //read_string(ptr_char, size1);
    print_string(ptr_char, size1);

    for(i = 0; (ptr_char != NULL && i < size1); i++)
        free(ptr_char[i]);
    free(ptr_char);
    return 0;
}

void read_string(char **ptr_char, int i, int size2){

    printf("\n============================================\n");


    //for (i = 0 ; i < size1; i++){

        printf("Please enter the string number %d : ", i + 1);
        //scanf("%s", ptr_char[i]);
        fgets (ptr_char, size2, stdin);
        printf("\n\n");
    //}
    printf("\n============================================\n");
}
void print_string(char **ptr_char, int size1){

    printf("\n============================================\n");

    int i, j = 0;
    for (i = 0 ; i < size1; i++){

        printf("The string number %d is : %s", i + 1, ptr_char[i]);

        printf("\n\n");
    }

    printf("\n============================================\n");
}
