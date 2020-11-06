//work out a function to output the larger number

#include <stdio.h>

int comparation(int *a, int *b){
  int max;
  if(*a > *b){
    max = *a;
  }else{
    max = *b;
  }
  return max;
}

int main(){
  printf("Please input to numbers to compare them:  ");
  int a = 0, b = 0, max = 0;
  scanf("%d %d",&a,&b);
  max = comparation(&a,&b);
  printf("%d\n",max);
  return 0;
}