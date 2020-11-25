/*
    m1 has x rows and y columns
    m2 has y rows and z columns
*/


#include <stdio.h>
#include <stdlib.h>

void matrix_size ( int *m1, int *m2, int *r, int x, int y, int z );

void matrix_multiply (int *m1, int *m2, int *r, int x, int y, int z );

int range_check ( int y, int y2);

void input_matrix ( int *m , int x, int y );

int main ( int argc, char const *argv[]) {
    int *m1, *m2, *r, x, y, y2, z, judge = 1;
    printf("Please input the first matrix's number of rows and number of columns\t");
    scanf("%d %d",&x,&y);
    printf("Please input the second matrix's number of rows and number of columns\t");
    scanf("%d %d",&y2,&z);
    judge = range_check(y,y2);
    if ( judge == 0 ) {
        return EXIT_FAILURE;
    }
    matrix_size (m1,m2,r,x,y,z);
    printf("Please input the first matrix\t");
    input_matrix(m1,x,y);
    printf("Please input the second matrix\t");
    input_matrix(m2,y,z);
    matrix_multiply (m1,m2,r,x,y,z);
    return 0; 
}

void matrix_size ( int *m1, int *m2, int *r, int x, int y, int z ) {
    m1 = (int*)malloc(sizeof(int)*x*y);
    m2 = (int*)malloc(sizeof(int)*y*z);
    r = (int*)malloc(sizeof(int)*x*z);
}

int range_check ( int y, int y2 ) {
    int judge = 1;
    if (y != y2) {
        judge = 0;
        printf("err");
        return judge;
    }
}

void input_matrix ( int *m, int x, int y ) {
    /* x is row, y is column.
    Please input in this order:
    1 2 3
    4 5 6
    7 8 9 
    */
    int row = 0;
    int column = 0;
    int *mp;
    for ( row = 0; row < x; row++ ) {
        for ( column = 0; column < y; column++ ) {
            mp = m + row*x + column;
            // scanf("%d",mp);
            *mp = 1;  // SEGMENTATION FAULT IN THIS STEP!
        }
    }
}

void matrix_multiply (int *m1, int *m2, int *r, int x, int y, int z ) {
    int *m1p;
    int *m2p;
    int k;
    int row;
    int column;

    for ( row = 0; row < x; row +=1 ) {
        for (column = 0; column < z; column +=1 ) {
            m1p = m1 + row * y;
            m2p = m2 + column; 
            *r = 0;

            for ( k = 0; k < y; k += 1) {
                *r += *m1p * *m2p;
                m1p += 1;
                m2p += z;
            }
            r++;
        }
    }
}

