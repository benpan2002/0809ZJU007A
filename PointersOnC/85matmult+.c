#include <stdio.h>

/**
 * Matrix A, row * column, element (i,j) 
 */
void print(const int *matrix, const int row, const int col) {
    int i,j;
    int offset;
    for (i = 0; i < row; i++) {
      offset = i * col;
      for (j = 0; j < col; j++) {
            printf("%d ", matrix[offset+j]);
        }
        printf("\n");
    }
}

/**
 * Matrix A, row * column, element (i,j) 
 * A(i,j)m*s  B(i,j)s*n
 * C = A*B = C(i,j)m*n  c(i,j) = sum(a(i,k)*b(k,j))
 * 
 * m1,m2 is input matrix, m1 is x*y, m2 is y*z
 * r is the result matrx, is x*z
 * 
 * refer: https://zhuanlan.zhihu.com/p/108085571
 */
void matrix_multiply (int *m1, int *m2, int *r, int x, int y, int z ) {
    int *m1p;
    int *m2p;
    int offsetR=0;
    int k;
    int row;
    int column;

    for ( row = 0; row < x; row ++ ) {
        for ( column = 0; column < z; column ++ ) {
        m1p = m1 + row * y;
        m2p = m2 + column;
        r[offsetR] = 0;

        for ( k = 0; k < y; k ++) {
            r[offsetR] += *m1p * *m2p;
            m1p += 1;
            m2p += z;
        }
        offsetR++;
    // printf("---- M1*M2: %d, %d  %d \n", row, column, offsetR);
    // print(r, x,z);
        }
    }
    printf("M1: \n");
    print(m1,x,y);
    printf("M2: \n");
    print(m2,y, z);
    printf("M1*M2: \n");
    print(r, x,z);
}

int main ( int argc, char const *argv[]) {
    // int x = 3, y = 2, z = 4;
    // int m1[4] = {3,4,5,6};
    // int m2[4] = {5,4,3,2};
    // int x = 2, y = 2, z = 2;
    // int r[4];
    // int m1[3*2] = {2, -6, 3, 5, 1, -1};
    // int m2[2*4] = {4, -2, -4, -5, -7, -3, 6, 7};
    // int r[3*4] = {0};
    int x = 3, y = 2, z = 3;
  int m1[6] = {2,3,4,5,3,5};
	int m2[6] = { 1,2,3,4,5,6 };
	int r[9]={0};
    matrix_multiply (m1,m2,r,x,y,z);
    return 0; 
}