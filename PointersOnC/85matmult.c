#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void input(int matrix[][SIZE]);

void multiple(int matrix1[][SIZE], int matrix2[][SIZE], int matrix3[][SIZE]);

void print(int matrix[][SIZE]);

int main( int argc, char const *argv[]) {
    int m1[SIZE][SIZE];
    int m2[SIZE][SIZE];
    int ans[SIZE][SIZE] = {{0},{0},{0}};
    input(m1);
    input(m2);
    multiple(m1,m2,ans);
    print(ans);
    return 0;
}

void input(int matrix[][SIZE]) {
    int i,j;
    static int cnt = 1;
    printf("Please input matrix %d\t",cnt);
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
           scanf("%d",&matrix[i][j]);
        }
    }
    cnt++;
}

void multiple(int matrix1[][SIZE], int matrix2[][SIZE], int matrix3[][SIZE]) {
    int i,j,k;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

void print(int matrix[][SIZE]) {
    int i,j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}