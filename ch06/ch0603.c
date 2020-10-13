#include <stdio.h>
//This Program is intended to show how to 遍历数组

int main(void){
  int m[][3] = {1,4,7,2,5,8,3,6,9,10,11};
  int i,j,k=2;
//  for ( i=0; i<3; i++ ) {
//    printf("%d", m[k][i]);
//  }
# if 0
  for( k = 0 ; k < sizeof(m[][0])/sizeof(m[0][0]) ; k++ ){
    for( i = 0 ; i < sizeof(m[0][])/sizeof(m[0][0]) ; i++){
      printf("%d\t",m[k][i]);
    }
    printf("\n");
  }
  #endif
  
}