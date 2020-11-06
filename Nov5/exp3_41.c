#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]){
    int start = 0, end = 0, i = 0, num = 0, IsPrime = 1, cnt = 0, Find = 0;
    printf("Please input two numbers:  \n");
    scanf("%d %d",&start,&end);
    // range check
    if ( start < 10 || end > 1000 || start > end ){
        printf("Please input again.");
        return EXIT_FAILURE;
    }
    // find prime
    for ( num = start+1; num < end; num++ ) {
        IsPrime = 1;
        for ( i = 2; i < sqrt(num); i++) {
            if ( num % i == 0 ) {
                IsPrime = 0;
                break;
            }
        }
        // output
        if ( IsPrime == 1 ){
            printf("%d ",num);
            cnt++;
            Find = 1;
            if( cnt == 5 ){
                printf("\n");
                cnt = 0;
            }
        }
    }
    if( Find == 0 )
        printf("NULL\n");
    return EXIT_SUCCESS;
}