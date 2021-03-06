/*
    m1 has x rows and y columns
    m2 has y rows and z columns
*/


#include <stdio.h>
#include <stdlib.h>

void matrix_plus (int *m1, int *m2, int *r, int x, int y );

void input_matrix ( int *m , int x, int y );

void matrix_output ( int *r, int x, int z );

int main ( int argc, char const *argv[]) {
    int *m1, *m2, *r, x, y;
    printf("Please input the matrixs' number of rows and number of columns\t");
    scanf("%d %d",&x,&y);
    if ( x < 1 || y < 1 ) {
    printf("err");
    return EXIT_FAILURE;
}
    m1 = (int*)malloc(sizeof(int)*x*y);
    m2 = (int*)malloc(sizeof(int)*x*y);
    r = (int*)malloc(sizeof(int)*x*y);
    printf("Please input the first matrix\n");
    input_matrix(m1,x,y);
    printf("Please input the second matrix\n");
    input_matrix(m2,x,y);
    matrix_plus(m1,m2,r,x,y);
    matrix_output(r,x,y);
    free(m1);
    free(m2);
    free(r);
    return EXIT_SUCCESS; 
}

void input_matrix ( int *m, int x, int y ) {
    /* x is row, y is column.
    Please input in this order:
    1 2 3
    4 5 6
    7 8 9 
    */
    int num = 0;
    int *mp;
    mp = m;
    for ( num = 0; num < (x*y); num++ ) {
        scanf("%d",mp);
        mp++;
    }
}

void matrix_plus (int *m1, int *m2, int *r, int x, int y ) {
    int *m1p;
    int *m2p;
    int *rp;
    int num;

    m1p = m1;
    m2p = m2;
    rp = r;


    for ( num = 0; num < (x*y); num++ ) {
        *r = *m1p + *m2p;
        r++;
        m1p++;
        m2p++;
    }
}

void matrix_output ( int *r, int x, int y ) {
    int *rp;
    int num;
    int cnt = 0;
    rp = r;
    printf("The answer is\n");
    for ( num = 0; num < (x*y); num++) {
            printf("%5d ",*rp);
            rp++;
            cnt++;
            if ( cnt == y ) {
                printf("\n");
                cnt = 0;
            }
        }
    }