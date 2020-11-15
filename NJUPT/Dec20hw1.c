#include <stdio.h>

void swap(int array[]) {
    int tmp,i;
    tmp = array[9];
    for(i = 8; i > -1; i--) {
        array[i+1] = array[i];
    }
    array[0] = tmp;
}

int main(void) {
    int i, m;
    scanf("%d",&m);
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for( ; m>0; m--) {
        swap(array);
    }
    for(i = 0; i < 10; i++) {
        printf("%3d",array[i]);
    }
    return 0;
}