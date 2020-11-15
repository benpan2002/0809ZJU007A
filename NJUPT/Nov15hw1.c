#include <stdio.h>

int main(void) {
    printf("*********\n *******\n  *****\n   ***\n    *\n");
   return 0;
}




#include <stdio.h>
#include <math.h>

int main(void) {
    int num = 100, isPrime = 1, i = 2, cnt = 0;
    for( num = 100; num < 1000; num++) {    
        for( i = 2; i <= sqrt(num); i++) {
            if ( num%i == 0) {
                isPrime = 0;
                break;
            }
        }
        if( isPrime == 1 ) {
            printf(" %d",num);
            cnt++;
            if(cnt == 8) {
                printf("\n");
                cnt = 0;
            }
        }else{
            isPrime = 1;
        }
    }
    printf("\n");
    return 0;
}


#include <stdio.h>
int main(void) {
    double s = 0, m = 0, i = 2, term = 0;
    scanf("%lf",&m);
    term = m;
    s += term;
    for( i = 2; term >= 1e-4 || term <= -(1e-4); i++) {
        term*=((-1)*m/i);
        s += term;
    }
    printf("%.2f\n",s);
    return 0;
}