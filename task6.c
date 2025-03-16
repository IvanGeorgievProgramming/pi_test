#include <stdio.h>
#define NUM 4 //10

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x10 matrix of real numbers and swaps the rows with the maximum and minimum values of the matrix.\n");

    // Entering the values for A
    float A[NUM][NUM];

    printf("\nEnter the values for A:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            }
            while((A[i][j] < 0) || (A[i][j] > 99));
        }
    }

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", A[i][j]);
        }
        printf("\n");
    }

    // Finding the maximum and minimum values of the matrix and their locations
    float max = A[0][0], min = A[0][0];
    int max_row = 0, min_row = 0;

    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(A[i][j] > max){
                max = A[i][j];
                max_row = i;
            }
            if(A[i][j] < min){
                min = A[i][j];
                min_row = i;
            }
        }
    }

    // Changing the locations of the rows
    float temp;

    for(int j = 0; j < NUM; j++){
        temp = A[max_row][j];
        A[max_row][j] = A[min_row][j];
        A[min_row][j] = temp;
    }

    // Printing the values of A after the change
    printf("\nPrinting the values of A after the change:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}