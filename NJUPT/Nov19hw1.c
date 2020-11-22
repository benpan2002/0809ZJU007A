#include <stdio.h>
#include <stdlib.h>

void DrawTriangle (int n,char c);

int Range (int n);

int main( int argc, char const *argv[]) {
    DrawTriangle(81,'*');
    // DrawTriangle(10,'#');
    return EXIT_SUCCESS;
}

int Range (int n) {
    if( n <= 0 ) {
        printf("err");
        return EXIT_FAILURE;
    }
}

void DrawTriangle (int n,char c) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= (2*i - 1); j++) {
            printf("%c",c);
        }
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        printf("\n");
    }
}