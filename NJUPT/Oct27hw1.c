/*
**B20011232 2020 27 Oct
**This is for the first question
*/

#include <stdio.h>

int main( int argc, char const *argv[] ){
  int num = 0, a = 0, sum = 0; 
  //input
  printf("Please input an integer:\n");
  scanf("%d", &num);
  //range check
  if ( num < 0 ){
    num = -num;
  }
  //calculation
  while ( num >= 10 ){
    a = num%10;
    num /= 10;
    sum += a;
  }
  sum += num;
  printf("The answer is %d", sum);
  return 0;
}