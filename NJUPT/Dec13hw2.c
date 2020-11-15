#include <stdio.h>

int fun( int a, int b, int r[] ) {
    int num,i = 0;
    for( num = a ; num <= b; num++) {
        if( num % 11 == 0 && num % 7 == 0 && num % 77 != 0) {
            r[i] = num;
            i++;
        }
    }
    return i;
}

int main(void) {
    int cnt, a, b, r[1000] = {0};
    scanf("%d %d",&a,&b);
    cnt = fun(a,b,r[1000]);
    int num,i = 0;
    for( num = a ; num <= b; num++) {
        if( ( num % 11 == 0 || num % 7 == 0 ) && num % 77 != 0) {
            r[i] = num;
            i++;
        }
    }
    printf("%d",r[0]);
    for( i = 1; r[i] != '\0'; i++ ) {
        printf(" %d",r[i]);
    }
    printf("\n");
    return 0;
}