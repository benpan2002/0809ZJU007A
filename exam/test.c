#include<stdio.h>

int main(void){
  int a=1, b=2;
  for( ; a<8 ; a++ ){
    a += 2;
    if ( a == 6 )continue;
    if ( a > 7 )break;                 
    b++;
  }
  printf( "%d,%d\n", a, b );
  return 0;
}