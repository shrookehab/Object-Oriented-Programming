#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4], i = 0, j = 0,average = 0, sum2 = 0;

    printf("Please enter the array values : \n");

    for (i=0; i < 3; i++){

        for (j=0; j < 4; j++){
            printf("--Enter row %d and column %d : \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }



    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            sum2 += arr[i][j];

        }
        printf("Sum of Row %d = %d\n", i, sum2);
        sum2 = 0;
    }

    sum2 = 0;

    for (i = 0; i < 4; i++){
        for (j= 0; j < 3; j++){
            sum2 += arr[j][i];

        }
        average = sum2 / 3;
        sum2 = 0;
        printf("Average of Column %d = %d\n", i, average);
    }



    return 0;
}
