#include <stdio.h>
#define NUM 8 //10

int NUMain(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 10-element array of real numbers and finds the first positive number and the last positive number in the array. Then it calculates the sum of the positive elements between the first and the last positive number. If the sum is even, replace all positive numbers with 0.\n");

    // Entering the values for A
    int A[NUM];

    for(int i = 0; i < NUM; i++){
        do{
            printf("A[%d] = ", i);
            scanf("%d", &A[i]);
        }
        while((A[i] < -999) || (A[i] > 999));
    }

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < NUM; i++){
        printf("(%d)  ", A[i]);
    }

    // Finding the first and last positive number
    int first_positive_index = -1, last_positive_index = -1;
    for(int i = 0; i < NUM; i++){
        if(A[i] > 0){
            if(first_positive_index == -1){
                first_positive_index = i;
            }
            last_positive_index = i;
        }
    }

    // Checking if there are no positive numbers
    if(first_positive_index == -1){
        printf("\nThere are no positive numbers in the array\n");
        return 0;
    }

    // Calculating the sum of the negative numbers between the first and last positive number and the sum of the positive numbers between the first and last positive number
    int negative_sum = 0, positive_sum = 0;
    for(int i = first_positive_index; i <= last_positive_index; i++){
        if(A[i] < 0){
            negative_sum += A[i];
        }
        else if(A[i] > 0){
            positive_sum += A[i];
        }
    }

    // Printing the sum of the negative numbers between the first and last positive number and the sum of the positive numbers between the first and last positive number
    printf("\nPrinting the sum of the negative numbers between the first and last positive number and the sum of the positive numbers between the first and last positive number:\n");
    printf("Negative Sum: %d\n", negative_sum);
    printf("Positive Sum: %d\n", positive_sum);

    // Changing the values of A if the sum of the positive numbers is even
    if(positive_sum % 2 == 0){
        for(int i = 0; i < NUM; i++){
            if(A[i] > 0){
                A[i] = 0;
            }
        }
    }

    // Printing the values of A after the change
    printf("\nPrinting the values of A after the change:\n");
    for(int i = 0; i < NUM; i++){
        printf("(%d)  ", A[i]);
    }

    return 0;
}