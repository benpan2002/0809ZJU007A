#include <stdio.h>

int main(void) {
    char str[1000]={1};
    int i,j;
    for(i = 1; str[i-1] != -1; i++) {
        scanf("%c",str[i]);
    }
    for(j = 1; j < i; j++) {
        if(str[j] >= '0' && str[j] <= '9'){
            printf("%c",str[j]);
        }
    }
    return 0;
}