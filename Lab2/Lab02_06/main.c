#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Please enter the array size :");
    scanf("%d", &size);
    int arr[size], i = 0;

    printf("\nPlease enter the array values : ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }


    printf("\nThe array values are : ");
    for (i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }



    return 0;
}
