#include <stdio.h>
#define M 5

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a MxM matrix of real numbers and replaces all numbers outside the interval [A - B] with their doubled value. Then transpose the matrices.\n");

    // Entering the values for D
    float D[M][M];

    printf("\nEnter the values for D:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            do{
                printf("D[%d][%d] = ", i, j);
                scanf("%f", &D[i][j]);
            }
            while((D[i][j] < -999.9) || (D[i][j] > 999.9));
        }
    }

    // Printing the values of D
    printf("\nPrinting the values of D:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            printf("(%f)  ", D[i][j]);
        }
        printf("\n");
    }
    
    // Entering the interval boundaries
    int A, B;
    printf("\nEnter the interval boundaries [A, B]:\n");
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    // Replace all numbers outside the interval [A - B] with their doubled value
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            if((D[i][j] < A) || (D[i][j] > B)){
                D[i][j] *= 2;
            }
        }
    }

    // Printing the values of D after the replacement
    printf("\nPrinting the values of D after the replacement:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            printf("(%f)  ", D[i][j]);
        }
        printf("\n");
    }

    // Transposing the matrix
    float D_transposed[M][M];

    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            D_transposed[i][j] = D[j][i];
        }
    }

    // Printing the transposed matrix
    printf("\nPrinting the transposed matrix:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            printf("(%f)  ", D_transposed[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}