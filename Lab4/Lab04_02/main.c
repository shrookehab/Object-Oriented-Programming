#include <stdio.h>
#include <stdlib.h>

void read_arr(int *, int);
void print_arr(int *, int);
int main()
{
    int size;

    printf("Please enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("\n\nPlease enter the array values :) \n\n=============================\n");

    read_arr(arr, size);
    print_arr(arr, size);

    return 0;
}
void read_arr(int *ptr, int size){
    int i;
    for(i = 0; i < size; i ++){

        printf("Enter Element number %d : ", i + 1);
        scanf("%d", &ptr[i]);

        printf("\n");
    }


}

void print_arr(int *ptr, int size){
    int i ;

    printf("\n========[The Array Values are]========\n\n");

    for(i = 0; i < size; i ++)
        printf("Element number %d is = %d\n", i + 1, * (ptr + i));

    printf("\n============[The End]============\n");
}
