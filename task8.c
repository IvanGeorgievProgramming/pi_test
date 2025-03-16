#include <stdio.h>
#define NUM 4 //10

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x10 matrix of real numbers and counts the number of negative numbers for each row and column. Then it finds the row and column with the least negative numbers.\n");

    // Entering the values for C
    float C[NUM][NUM];
    
    printf("\nEnter the values for C:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("C[%d][%d] = ", i, j);
                scanf("%f", &C[i][j]);
            }
            while((C[i][j] < -999) || (C[i][j] > 999));
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

    // Creating arrays to store the number of negative numbers for each row and column
    int negative_numbers_for_each_row_count[NUM];
    int negative_numbers_for_each_column_count[NUM];

    for(int i = 0; i < NUM; i++){
        negative_numbers_for_each_row_count[i] = 0;
        negative_numbers_for_each_column_count[i] = 0;
    }

    // Finding the number of negative numbers for each row and column
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(C[i][j] < 0){
                negative_numbers_for_each_row_count[i]++;
                negative_numbers_for_each_column_count[j]++;
            }
        }
    }

    // Printing the number of negative numbers for each row
    printf("\nPrinting the number of negative numbers for each row:\n");
    for(int i = 0; i < NUM; i++){
        printf("%d  ", negative_numbers_for_each_row_count[i]);
    }

    // Printing the number of negative numbers for each column
    printf("\nPrinting the number of negative numbers for each column:\n");
    for(int i = 0; i < NUM; i++){
        printf("%d  ", negative_numbers_for_each_column_count[i]);
    }

    // Checking which row and column has the least negative numbers
    int row_with_least_negative_numbers = 0;
    
    for(int i = 0; i < NUM; i++){
        if(negative_numbers_for_each_row_count[i] < negative_numbers_for_each_row_count[row_with_least_negative_numbers]){
            row_with_least_negative_numbers = i;
        }
    }

    int column_with_least_negative_numbers = 0;

    for(int i = 0; i < NUM; i++){
        if(negative_numbers_for_each_column_count[i] < negative_numbers_for_each_column_count[column_with_least_negative_numbers]){
            column_with_least_negative_numbers = i;
        }
    }

    // Printing the row and column with the least negative numbers
    printf("\nRow with the least negative numbers: %d\n", row_with_least_negative_numbers);
    printf("Column with the least negative numbers: %d\n", column_with_least_negative_numbers);

    return 0;
}