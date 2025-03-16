#include <stdio.h>
#define NUM 4 //10

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x10 matrix of real numbers and finds the biggest negative number in the matrix and the smallest positive number in the matrix and swaps their positions.\n");

    // Entering the values for C
    float C[NUM][NUM];
    
    printf("\nEnter the values for C:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("C[%d][%d] = ", i, j);
                scanf("%f", &C[i][j]);
            }
            while((C[i][j] < -200) || (C[i][j] > 200));
        }
    }

    // Printing the values of C
    printf("\nPrinting the values of C:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", C[i][j]);
        }
        printf("\n");
    }

    // Finding the smallest positive number
    float smallest_positive_number = 1000;
    int smallest_positive_number_row, smallest_positive_number_column;

    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if((C[i][j] > 0) && (C[i][j] < smallest_positive_number)){
                smallest_positive_number = C[i][j];
                smallest_positive_number_row = i;
                smallest_positive_number_column = j;
            }
        }
    }

    if((smallest_positive_number == 1000)){
        printf("\nThere are no positive numbers in the matrix\n");
        return 0;
    }

    // Finding the biggest negative number
    float biggest_negative_number = -1000;
    int biggest_negative_number_row, biggest_negative_number_column;

    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if((C[i][j] < 0) && (C[i][j] > biggest_negative_number)){
                biggest_negative_number = C[i][j];
                biggest_negative_number_row = i;
                biggest_negative_number_column = j;
            }
        }
    }

    if((biggest_negative_number == -1000)){
        printf("\nThere are no negative numbers in the matrix\n");
        return 0;
    }

    // Printing the smallest positive number and the biggest negative number
    printf("\nPrinting the smallest positive number and the biggest negative number:\n");
    printf("Smallest Positive Number: %f\n", smallest_positive_number);
    printf("Biggest Negative Number: %f\n", biggest_negative_number);

    // Swapping the numbers
    float temp = C[smallest_positive_number_row][smallest_positive_number_column];
    C[smallest_positive_number_row][smallest_positive_number_column] = C[biggest_negative_number_row][biggest_negative_number_column];
    C[biggest_negative_number_row][biggest_negative_number_column] = temp;

    // Printing the values of C after the change
    printf("\nPrinting the values of C after the change:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}