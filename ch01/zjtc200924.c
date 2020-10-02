#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, odd, even;
  printf("input some integer between 0 and 100000, -1 will exit:");
  // initial value
  i = 0;
  odd=0;
  even=0;
  do{
    // read input from console
    scanf("%d", &i);
    // validate input
    if (i == -1){
      break;
    }
    // range check
    if (i >=0 && i <= 10000){
      if (i % 2 ) {
        odd++;
      } else {
        even++;
      }
    }

  }while(1);
  printf("result: even count %d, odd count %d.\n", even, odd);
  return EXIT_SUCCESS;
 }