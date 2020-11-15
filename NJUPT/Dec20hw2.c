#include <stdio.h>

#define LEN 10

void input(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
}

void queue(int arr[], int size) {
    int i, j, tmp;
    
    for( i = 0; i < size-1; i++) {
        for( j = 0; j < size-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void print(int arr[], int size) {
    int i;
    for( i = 0; i < size; i++) {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[LEN] = {0};
    int size;
    scanf("%d",&size);
    input(arr,size);
    queue(arr,size);
    print(arr,size);
    return 0;
}