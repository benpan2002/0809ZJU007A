#include <stdio.h>
#include <math.h>

int main(void) {
    int isPrime = 1, i = 2, num = 3, cnt = 0, even = 4, first = 1, second = 301, second_number = 3, prime[301] = {0}, out = 0;
    for ( num = 3; num < 1998; num++) {
        for ( i = 2; i <= sqrt(num); i++ ) {
            if( num % i == 0 ) {
                isPrime = 0;
                break;
            }
        }
        if( isPrime == 1 ) {
            prime[cnt] = num;
            cnt++;
        }else{
            isPrime = 1;
        }
    }

    cnt = 1;
    printf("   4=   2+   2 ");
    for( even = 6; even < 2002; even+=2) {
        for(first = 0; ;first++){
            second_number = even - prime[first];
            for( i = 0; i < 301; i++) {
                if( prime[i] == second_number ) {
                    printf("%4d=%4d+%4d",even,prime[first],second_number);
                    out = 1;
                    cnt++;
                    if (cnt == 4){
                        printf("\n");
                        cnt = 0;
                    }else{
                        printf(" ");
                    }
                    break;
                }
            }
            if(out) {
                out = 0;
                break;
            }
        }
    }


    return 0;
}
