#include <stdio.h>

int main(void) {
    int year, month, day, i, result = 0, m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d-%d-%d",&year,&month,&day);
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
        m[1] = 29;
    }
    for( i = 0; i < month - 1; i++) {
        result+=m[i];
    }
    result+=day;
    printf("%d",result);
    return 0;
}