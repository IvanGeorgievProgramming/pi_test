#include <stdio.h>
#define NUM 3 //10

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x10 matrix of real numbers and prints the sorted values of the positive numbers in the matrix.\n");

    // Entering the values for A
    float A[NUM][NUM];

    printf("\nEnter the values for A:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            }
            while((A[i][j] < -999.9) || (A[i][j] > 999.999));
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

    // Counting all positive numbers
    int count = 0;

    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(A[i][j] > 0){
                count++;
            }
        }
    }
    
    // Making an array for all positive numbers
    float positive_numbers[count];

    // Filling the new array
    int position = 0;
    
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(A[i][j] > 0){
                positive_numbers[position] = A[i][j];
                position++;
            }
        }
    }

    // Sorting the new array
    for(int i = 0; i < count - 1; i++){
        for(int j = 0; j < count - 1; j++){
            if(positive_numbers[j] > positive_numbers[j + 1]){
                float temp = positive_numbers[j];
                positive_numbers[j] = positive_numbers[j + 1];
                positive_numbers[j + 1] = temp;
            }
        }
    }
    
    // Printing the sorted values of B
    printf("\nPrinting the sorted values of B:\n");
    for(int i = 0; i < count; i++){
        printf("(%f)\n", positive_numbers[i]);
    }

    return 0;
}