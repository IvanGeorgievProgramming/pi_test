#include <stdio.h>
#define M 5

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a MxM matrix of real numbers and finds the smallest maximum of all elements by columns.\n");

    // Entering the values for A
    float A[M][M];

    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            do{
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &A[i][j]);
            }
            while((A[i][j] < -9999) || (A[i][j] > 9999));
        }
    }

    // Printing the values of A
    printf("\nPrinting the values of A:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            printf("(%f)  ", A[i][j]);
        }
        printf("\n");
    }

    // Finding the maximum of all elements by columns
    float max[M];

    for(int j = 0; j < M; j++){
        for(int i = 0; i < M; i++){
            if(i == 0){
                max[j] = A[i][j];
            }
            else{
                if(A[i][j] > max[j]){
                    max[j] = A[i][j];
                }
            }
        }
    }

    // Printing the maximum of all elements by columns
    printf("\nPrinting the maximum of all elements by columns:\n");
    for(int i = 0; i < M; i++){
        printf("(%f)  ", max[i]);
    }

    // Finding the smallest maximum
    float minimax;

    for(int i = 0; i < M; i++){
        if(i == 0){
            minimax = max[i];
        }
        else{
            if(max[i] < minimax){
                minimax = max[i];
            }
        }
    }

    // Printing the smallest maximum
    printf("\nThe smallest maximum is: %f\n", minimax);

    return 0;
}