#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    printf(" Choice number (1) \n Choice number (2) \n Choice number (3) \n Press (4) to Exit \n\n ");

    printf("Please enter a choice : ");
    scanf("%d", &choice);

    while(1){

        if (choice == 4)
            break;

        switch (choice){
            case 1:
                printf("\nYour Choice is 1 \n");
                break;

            case 2:
                printf("\nYour Choice is 2 \n");
                break;

            case 3:
                printf("\nYour Choice is 3 \n");
                break;

            default:
                printf("\nWRONG CHOICE!!!!");

        }
        printf(" Choice number (1) \n Choice number (2) \n Choice number (3) \n Press (4) to Exit \n\n ");
        printf("Please enter a choice : ");
        scanf("%d", &choice);

    }



    return 0;
}
