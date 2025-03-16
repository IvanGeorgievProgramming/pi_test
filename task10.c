#include <stdio.h>
#define NUM 5 //20

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 20x20 matrix of real numbers and changes the elements of the matrix according to the following rules: if the sum of the row and column indexes is even, the element is replaced with 0. Then all non-zero elements are moved to the beginning of the matrix.\n");

    // Entering the values for M
    float M[NUM][NUM];
    
    printf("\nEnter the values for M:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("M[%d][%d] = ", i, j);
                scanf("%f", &M[i][j]);
            }
            while((M[i][j] < -999) || (M[i][j] > 999));
        }
    }

    // Printing the values of M
    printf("\nPrinting the values of M:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", M[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            int sum_of_i_and_j = i + j;
            if(sum_of_i_and_j % 2 == 0){
                M[i][j] = 0;
            }
        }
    }

    // Printing the values of M after the change
    printf("\nPrinting the values of M after the change:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", M[i][j]);
        }
        printf("\n");
    }

    // Moving all non-zero elements to the beginning of the matrix
    for(int i = 0; i < NUM; i++){
        for(int j = NUM - 1; j >= 0; j--){
            if(M[i][j] != 0){
                for(int k = j - 1; k >= 0; k--){
                    if(M[i][k] == 0){
                        float temp = M[i][j];
                        M[i][j] = M[i][k];
                        M[i][k] = temp;
                    }
                }
            }
        }
    }

    // Printing the values of M after the change
    printf("\nPrinting the values of M after the change:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}