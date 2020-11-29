/*
    m1 has x rows and y columns
    m2 has y rows and z columns
*/


#include <stdio.h>
#include <stdlib.h>

void matrix_nummult (int *m, int *r, int num, int x, int y );

void input_matrix ( int *m , int x, int y );

void matrix_output ( int *r, int x, int z );

int main ( int argc, char const *argv[]) {
    int *m, *r, x, y, num;
    printf("Please input the matrix's number of rows and number of columns\t");
    scanf("%d %d",&x,&y);
    if ( x < 1 || y < 1 ) {
        printf("err");
        return EXIT_FAILURE;
    }
    m = (int*)malloc(sizeof(int)*x*y);
    r = (int*)malloc(sizeof(int)*x*y);
    printf("Please input the matrix\n");
    input_matrix(m,x,y);
    printf("Please input the number\t");
    scanf("%d",&num);
    matrix_nummult(m,r,num,x,y);
    matrix_output(r,x,y);
    free(m);
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

void matrix_nummult (int *m, int *r, int num, int x, int y ) {
    int *mp;
    int *rp;
    int cnt;

    mp = m;
    rp = r;

    for ( cnt = 0; cnt < (x*y); cnt++ ) {
        *r = *mp * num;
        r++;
        mp++;
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