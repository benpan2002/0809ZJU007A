# include <stdio.h>
# include <stdlib.h>

int main(int argc, const int *argv[]){
  int n = 1000;
  double a = 1, b = 1, sum = 0;
  for(n = 1000; n>0; n-=2){
    a+=b;
    sum+=(a/b);
    b+=a;
    sum-=(b/a);
  }
  printf("The answer is %f",sum);
  return EXIT_SUCCESS;
}