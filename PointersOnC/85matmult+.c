#include <stdio.h>

// void matrix_size ( int x, int y, int z, int *m1, int *m2, int *r);

void matrix_multiply (int *m1, int *m2, int *r, int x, int y, int z );

int main ( int argc, char const *argv[]) {
    // int x = 3, y = 2, z = 4;
    int m1[4] = {3,4,5,6};
    int m2[4] = {5,4,3,2};
    int r[4] = {0};
    int x = 2, y = 2, z = 2;
    // int m1[3*2] = {2, -6, 3, 5, 1, -1};
    // int m2[2*4] = {4, -2, -4, -5, -7, -3, 6, 7};
    // int r[3*4] = {0};
    matrix_multiply (m1,m2,r,x,y,z);
    return 0; 
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

// void output (int *r) {
//     int ;
// }





// 27 20
// 43 32