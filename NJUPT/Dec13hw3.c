#include <stdio.h>

int main(void) {
    int i, array[10] = {0};
    for( i = 0; i < 10; i++) {
        scanf("%d",&array[i]);
    }
    int j,tmp;
    for( i = 0; i < 9; i++) {
        for( j = 0; j < 9 - i; j++){
            if (array[j] > array[j+1]) {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

    int min = array[0];
    int max = array[9];
    int start = 0;
    int last = 9;
    int cnt1 = 0, cnt2 = 0;

    do {
        array[last] = 0;
        last--;
        cnt1++;
    }while(array[last] == max);

    do {
        array[start] = 0;
        start++;
        cnt2++;
    }while(array[start] == min);
    
    int sum = 0;
    double ave = 0;

    for( i = 0; i < 10; i++ ) {
        sum+=array[i];
        ave = (sum*1.0)/(10-cnt1-cnt2);
    }
    printf("%lf\n",ave);

    return 0;
}