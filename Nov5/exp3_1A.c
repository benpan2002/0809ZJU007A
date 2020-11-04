# include <stdio.h>
# include <stdlib.h>

int main(int argc, const int *argv[]){
  int n;
  double a = 1, b = 1, sum = 0;
  printf("Please input a number 'n'\n");
  scanf("%d",&n);
  if(n<=0){
    printf("err");
    return EXIT_FAILURE;
  }
  
  for(n = n; n>0; n-=2){
    if(n == 1){
      a+=b;
      sum+=(a/b);
      break;
    }
    a+=b;
    sum+=(a/b);
    b+=a;
    sum-=(b/a);
  }
  printf("The answer is %f",sum);
  return EXIT_SUCCESS;
}