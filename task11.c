#include <stdio.h>
#define NUM 6 //60

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 60-element array of real numbers and replaces all numbers in the interval [M, N] with 0 if they are multiples of Del and prints their indexes.\n");

    // Entering the values for A
    float A[NUM];

    for(int i = 0; i < NUM; i++){
        do{
            printf("A[%d] = ", i);
            scanf("%f", &A[i]);
        }
        while((A[i] < 0) || (A[i] > 99));
    }

    // Entering the interval boundaries and number Del
    int M, N, Del;
    printf("\nEnter the interval boundaries [M, N]:\n");
    printf("M = ");
    scanf("%d", &M);
    printf("N = ");
    scanf("%d", &N);
    printf("\nEnter the number Del:\n");
    printf("Del = ");
    scanf("%d", &Del);

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < NUM; i++){
        printf("(%f)  ", A[i]);
    }

    // Printing the interval boundaries and number Del
    printf("\nPrinting the interval boundaries and number Del:\n");
    printf("M = %d\n", M);
    printf("N = %d\n", N);
    printf("Del = %d\n", Del);

    // Replacing all numbers in the interval [M, N] with 0 if they are multiples of Del and printing their indexes
    printf("\nReplacing all numbers in the interval [%d, %d] with 0 if they are multiples of %d and printing their indexes:\n", M, N, Del);
    for(int i = 0; i < NUM; i++){
        if((A[i] >= M) && (A[i] <= N) && ((int)A[i] % Del == 0)){
            A[i] = 0;
            printf("%d  ", i);
        }
    }

    // Printing the values of A after the replacement
    printf("\nPrinting the values of A after the replacement:\n");
    for(int i = 0; i < NUM; i++){
        printf("(%f)  ", A[i]);
    }

    return 0;
}