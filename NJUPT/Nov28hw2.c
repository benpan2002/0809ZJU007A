#include <stdio.h>
#include <string.h>

int main(void) {
    int num, i, find = 0;
    int array[10] = {1, 2, 3, 4 ,5, 6 ,7, 8, 9, 10};
    scanf("%d",&num);
    for( i = 0; i < 10; i++) {
        if(num == array[i]) {
            printf("%4d=%4d",i,array[i]);
            find = 1;
            break;
        }
    }
    printf("\n");
    if (find == 1) {
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}