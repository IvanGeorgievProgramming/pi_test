#include <stdio.h>
#define NUM 5 //10

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x10 matrix of real numbers and swaps the positions of the minimum values to the front of the matrix and the maximum values to the back of the matrix.\n");

    // Entering the values for A
    float A[NUM][NUM];
    
    printf("\nEnter the values for A:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            }
            while((A[i][j] < -500) || (A[i][j] > 500));
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

    // Finding the location of the minimum element in each row
    int min_index[NUM];

    for(int i = 0; i < NUM; i++){
        min_index[i] = 0;
        for(int j = 0; j < NUM; j++){
            if(A[i][j] < A[i][min_index[i]]){
                min_index[i] = j;
            }
        }
    }

    // Swapping the numbers so that the minimum element in each row is the first element
    for(int i = 0; i < NUM; i++){
        float temp = A[i][0];
        A[i][0] = A[i][min_index[i]];
        A[i][min_index[i]] = temp;
    }

    // Finding the location of the maximum element in each row
    int max_index[NUM];

    for(int i = 0; i < NUM; i++){
        max_index[i] = 0;
        for(int j = 0; j < NUM; j++){
            if(A[i][j] > A[i][max_index[i]]){
                max_index[i] = j;
            }
        }
    }

    // Swapping the numbers so that the maximum element in each row is the last element
    for(int i = 0; i < NUM; i++){
        float temp = A[i][NUM - 1];
        A[i][NUM - 1] = A[i][max_index[i]];
        A[i][max_index[i]] = temp;
    }

    // Printing the values of A after the swap
    printf("\nPrinting the values of A after the swap:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", A[i][j]);
        }
        printf("\n");
    }

    // Entering the numbers M and N
    int M, N;
    printf("\nEnter the numbers M and N:\n");
    printf("M = ");
    scanf("%d", &M);
    printf("N = ");
    scanf("%d", &N);

    // Determining the number of maximum elements greater than M and the number of minimum elements less than N
    int count_min = 0, count_max = 0;

    for(int i = 0; i < NUM; i++){
        if(A[i][0] < N){
            count_min++;
        }
        if(A[i][NUM - 1] > M){
            count_max++;
        }
    }
    // Printing the number of maximum elements greater than M and the number of minimum elements less than N
    printf("\nThe number of maximum elements greater than %d is %d\n", M, count_max);
    printf("The number of minimum elements less than %d is %d\n", N, count_min);

    return 0;
}