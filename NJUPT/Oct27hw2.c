/*
**B20011232 2020 27 Oct
**This is for the second question
**To separate the part of finding the numbers with 
**the part of outputing the numbers, I use the array.
*/

#include <stdio.h>
#include <stdlib.h>

// #define START 11
// #define END 200
#define SIZE 100

int main(int argc, char const *argv[]){
  // 
  int START = 11;
  int END = 200;
  int num = START, a = 0, b = 0, mun = 0, cnt = 0;
  int palindrome[SIZE] = {0};
  for ( num = START; num <= END; num++ ) {
    b = num;
    while ( b > 9 ){
      a = b%10;
      b /= 10;
      mun += a;
      mun *= 10;
    }
    mun+=b;
    if(num == mun){
      palindrome[cnt]=num;
      cnt++;
    }
    mun = 0;
  }
  if(cnt == 0){
    printf("There is no number fitting your requirement.");
    return EXIT_FAILURE;
  }
  // const int MAX = cnt;
  for (int i = 0; i < cnt; i++){
    printf("%d\t",palindrome[i]);
    if(i%5 == 4){
      printf("\n");
    }
  }
  printf("\n");
  return EXIT_SUCCESS;
}