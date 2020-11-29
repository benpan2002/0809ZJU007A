/*
    m1 has x rows and y columns
    m2 has y rows and z columns
*/


#include <stdio.h>
#include <stdlib.h>

void input_matrix ( int *m , int x, int y );

void matrix_output ( int *m, int x, int z );

int main ( int argc, char const *argv[]) {
    int *m, x, y;
    printf("Please input the matrix's number of rows and number of columns\t");
    scanf("%d %d",&x,&y);
    if ( x < 1 || y < 1 ) {
        printf("err");
        return EXIT_FAILURE;
    }
    m = (int*)malloc(sizeof(int)*x*y);
    printf("Please input the matrix\n");
    input_matrix(m,x,y);
    matrix_output(m,x,y);
    free(m);
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

void matrix_output ( int *m, int x, int y ) {
    int *mp;
    int row;
    int column;
    mp = m;
    printf("The answer is\n");
    for ( column = 0; column < y; column++ ) {
        mp = m + column;
        for ( row = 0; row < x; row++ ) {
            mp += row*y;
            printf("%5d",*mp);
        }
        printf("\n");
    }
}