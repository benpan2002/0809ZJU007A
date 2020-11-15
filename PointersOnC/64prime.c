#include <stdio.h>
#include <math.h>

int main( int argc, char const *argv[] ) {
    char prime[1000], i, n, len;
    scanf("%d",&len);
    for( i = len-1; i > 1; i--) {
        prime[i] = 1;
    }

    for( i = 2 ;i < sqrt(len) ;i++ ) {
        if ( prime[i] == 0 ) {
            continue;
        }
        for( n = 2; n*i < len-1;n++ ) {
            prime[n*i] = 0;
        }
        
    }
    for( i = 2; i < len-1; i++) {
        if (prime[i] != 0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}