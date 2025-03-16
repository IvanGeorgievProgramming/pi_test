#include <stdio.h>
#define NUM 6 //20

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 20-element array of real numbers and prints the minimum, maximum and sum of the elements.\n");

    // Entering the values for A
    float A[NUM];

    for(int i = 0; i < NUM; i++){
        do{
            printf("A[%d] = ", i);
            scanf("%f", &A[i]);
        }
        while((A[i] < -99) || (A[i] > 99));
    }

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < NUM; i++){
        printf("(%f)  ", A[i]);
    }

    float min = A[0], max = A[0], sum = 0;

    for(int i = 0; i < NUM; i++){
        if(A[i] < min){
            min = A[i];
        }
        if(A[i] > max){
            max = A[i];
        }
        sum += A[i];
    }

    // Printing the minimum, maximum and sum of the elements
    printf("\nPrinting the minimum, maximum and sum of the elements:\n");
    printf("Minimum: %f\n", min);
    printf("Maximum: %f\n", max);
    printf("Sum: %f\n", sum);

    return 0;
}