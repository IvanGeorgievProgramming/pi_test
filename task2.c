#include <stdio.h>
#define M 5

int main(){
    // Printing the General Info
    printf("Autor: ...\n");
    printf("Task: Program that reads a MxM matrix of real numbers and prints the average of elements over the main diagonal that are in the interval [A, B] and are multiples of R.\n");

    // Entering the values for D
    float D[M][M];

    printf("\nEnter the values for D:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            do{
                printf("D[%d][%d] = ", i, j);
                scanf("%f", &D[i][j]);
            }
            while((D[i][j] < -999) || (D[i][j] > 999));
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

    // Entering the interval boundaries and multiple R
    int A, B, R;
    printf("\nEnter the interval boundaries [A, B]:\n");
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    printf("\nEnter the multiple R:\n");
    printf("R = ");
    scanf("%d", &R);

    // Finding the average of elements over the main diagonal that are in the interval [A, B] and are multiples of R
    float sum = 0, average;
    int count = 0;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            if(i < j){
                if((D[i][j] >= A) && (D[i][j] <= B) && ((int)D[i][j] % R == 0)){
                    sum += D[i][j];
                    count++;
                }
            }
        }
    }
    
    // Printing the average
    if(count == 0){
        printf("\nThere are no elements over the main diagonal that are in the interval [%d, %d] and are multiples of %d\n", A, B, R);
    }
    else{
        average = sum / count;
        printf("\nThe average of elements over the main diagonal that are in the interval [%d, %d] and are multiples of %d is: %f\n", A, B, R, average);
    }

    return 0;
}