#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char const*argv[] ){
    int up, down, i;
    printf("Please input a fraction:\n");
    scanf("%d/%d",&up,&down);
    if ( down == 0 ){
        printf("err");
        return EXIT_FAILURE;
    }
    if ( up / down < 0 ){
        printf("-");
    }
    up = fabs(up);
    down = fabs(down);
    for( i = 2; i <= up && i <= down; i++){
        if ( up % i == 0 && down % i == 0 ){
            up /= i;
            down /= i;
            i--;
        }
    }
    printf("%d/%d",up,down);
    return EXIT_SUCCESS;
}