#include <stdio.h>

int main(void){
  int m[][3] = {1,4,7,2,5,8,3,6,9,10};
  int i,k=2;
  int size = sizeof(m) / sizeof(m[0]);
  for (int j = 0; j < size; j++) {
    for ( i=0; i<3; i++ ) {
        // printf("%d", m[k][i]);
        printf("%d \t ", m[j][i]);
    }
    printf("\n");
  }
int a[][3] = {{0},{1},{2}};
    printf("%d", a[1][2]);
}