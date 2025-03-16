#include <stdio.h>
#define NUM 6 //6

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a 6x6 matrix of real numbers and for each element if it is on the main diagonal make it 0, if it is above the main diagonal make it positive, if it is below the main diagonal make it negative.\n");

    // Entering the values for C
    float C[NUM][NUM];
    
    printf("\nEnter the values for C:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            do{
                printf("C[%d][%d] = ", i, j);
                scanf("%f", &C[i][j]);
            }
            while((C[i][j] < -99) || (C[i][j] > 99));
        }
    }

    // Printing the values of C
    printf("\nPrinting the values of C:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", C[i][j]);
        }
        printf("\n");
    }

    // For each element if it is on the main diagonal make it 0, if it is above the main diagonal make it positive, if it is below the main diagonal make it negative
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(i == j){
                C[i][j] = 0;
            }
            else if(i < j){
                if(C[i][j] < 0){
                    C[i][j] = -C[i][j];
                }
            }
            else{
                if(C[i][j] > 0){
                    C[i][j] = -C[i][j];
                }
            }
        }
    }

    // Printing the values of C after the change
    printf("\nPrinting the values of C after the change:\n");
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            printf("(%f)  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}