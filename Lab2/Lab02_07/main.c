#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size, i = 0, min = 9999, max = -9999;
    printf("Please enter the array size :");
    scanf("%d", &size);

    int arr[size];


    for (i = 0; i < size; i++){
        printf("\nPlease enter the row %d : \n", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array values are : \n");
    for (i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }

    for (i = 0; i < size; i++){
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }


    printf("\nThe min number in the array is : %d\n\n and The max number in the array is : %d", min, max);

    return 0;
}
