#include <stdio.h>
#define NUM_1 3 //10
#define NUM_2 5 //20

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10x20 matrix of real numbers and replaces all negative numbers in the interval [M, N] with the number Q and stores the result in a new array.\n");
    // Entering the values for A
    float A[NUM_1][NUM_2];

    printf("\nEnter the values for A:\n");
    for(int i = 0; i < NUM_1; i++){
        for(int j = 0; j < NUM_2; j++){
            do{
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            }
            while((A[i][j] < -999.99) || (A[i][j] > 999.99));
        }
    }

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < NUM_1; i++){
        for(int j = 0; j < NUM_2; j++){
            printf("(%f)  ", A[i][j]);
        }
        printf("\n");
    }

    // Entering the interval boundaries and number Q
    int M, N, Q;
    printf("\nEnter the interval boundaries [M, N]:\n");
    printf("M = ");
    scanf("%d", &M);
    printf("N = ");
    scanf("%d", &N);
    printf("\nEnter the number Q:\n");
    printf("Q = ");
    scanf("%d", &Q);

    // Replace all negative numbers in the interval [M, N] with the number Q and store the result in a new array
    float B[NUM_1][NUM_2];
    int count = 0;

    for(int i  = 0; i < NUM_1; i++){
        for(int j = 0; j < NUM_2; j++){
            if((A[i][j] >= M) && (A[i][j] <= N) && (A[i][j] < 0)){
                B[i][j] = Q;
                count++;
            }
            else{
                B[i][j] = A[i][j];
            }
        }
    }

    // Printing the values of B
    printf("\nPrinting the values of B:\n");
    for(int i = 0; i < NUM_1; i++){
        for(int j = 0; j < NUM_2; j++){
            printf("(%f)  ", B[i][j]);
        }
        printf("\n");
    }

    // Printing the number of replaced elements
    printf("\nThe number of replaced elements is: %d\n", count);

    return 0;

}