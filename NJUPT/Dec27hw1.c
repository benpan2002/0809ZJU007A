#include <stdio.h>

void tras(int remainder) {
    if(remainder >=0 && remainder <= 9){
        printf("%d",remainder);
    }else if(remainder == 10) {
        printf("A");
    }else if(remainder == 11) {
        printf("B");
    }else if(remainder == 12) {
        printf("C");
    }else if(remainder == 13) {
        printf("D");
    }else if(remainder == 14) {
        printf("E");
    }else if(remainder == 15) {
        printf("F");
    }
}

int main(void) {
    int ten,i = 0,remainder;
    int six[100] = {0};
    scanf("%d",&ten);
    while(ten >= 16) {
        remainder = ten % 16;
        six[i] = remainder;
        i++;
        ten/=16;
    }
    six[i] = ten;
    for(;i > -1; i--) {
        tras(six[i]);
    }
    return 0;
}