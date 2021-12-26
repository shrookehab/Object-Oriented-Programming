#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void gotoxy(int, int);

int main()
{
    //int arr[size1][size1];
    int size, CurrentNum, row = 0, col = 0, i = 0, numOfrows = 0;

    while(1){
        printf("Please enter the box size (ONLY ODD NUMBERS!):");
        scanf("%d", &size);
        printf("\n\n");
        if (size % 2 != 0)
            break;

        else
            printf("WORONG INPUT!!! \n\n");
    }

    system("cls");

    printf(" Magic Box :)\n");

    CurrentNum = 1;

        col = size / 2;
        if ( size == 3){

            gotoxy(0, -1);
            printf("=================");
        }
        else if (size == 5){
            gotoxy(0, -1);
            printf("============================");
        }
        else if (size == 9){
            gotoxy(0, -1);
            printf("===============================================");
        }
        else if (size == 11){
            gotoxy(0, -1);
            printf("==========================================================");
        }
        else if (size == 13){
            gotoxy(0, -1);
            printf("====================================================================");
        }
        else if (size == 15){
            gotoxy(0, -1);
            printf("==============================================================================");
        }
        gotoxy(col, row);
        printf("|| %d ||",CurrentNum);


        for (i = 0; i < (size*size - 1); i++){


            if (CurrentNum % size != 0){

                if (row == 0)
                    row = size - 1;
                else
                    row--;

                if (col == 0)
                    col = size - 1;
                else
                    col--;

                gotoxy(col, row);
                printf("|| %d ||",CurrentNum + 1);

            }
            else{


                if (row == size - 1)
                    row = 0;
                else
                    row++;

                gotoxy(col, row);
                printf("|| %d ||",CurrentNum + 1);


            }
            CurrentNum++;

        }
        if ( size == 3){

            gotoxy(0, row + 1);
            printf("=================\n");
        }
        else if (size == 5){
            gotoxy(0, row + 1);
            printf("============================\n");
        }
        else if (size == 9){
            gotoxy(0, row + 1);
            printf("===============================================\n");
        }
        else if (size == 11){
            gotoxy(0, row +1);
            printf("==========================================================\n");
        }
        else if (size == 13){
            gotoxy(0, row +1);
            printf("====================================================================\n");
        }
        else if (size == 15){
            gotoxy(0, row +1);
            printf("==============================================================================\n");
        }
    return 0;
}

void gotoxy(int x, int y){
    COORD c;
    c.X = ((x + 1) * 5 ) + 10;
    c.Y = (y + 3);

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

}
