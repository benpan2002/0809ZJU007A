//Decomposing a number

#include <stdio.h>
// #include <stdlib.h>

int decompose( int num );

int input();

int range( int *num );

int main( int argc, char const *argv[]){
  int num = input();
  num = range(&num);
  if(num){
    decompose(num);
    return 0;
  }
}

int input() {
  int num = 0;
  printf("Please input the number:\n");
  scanf("%d", &num);
  return num;
}

int range( int *num ) {
  if ( *num <= 0 ) {
    printf("err");
    *num = 0;
  }
  return *num;
}

int decompose( int num ) {  
  printf("%d=",num);
  int divisor=num;
  int i=2;
  int Prime=1;
  for( i = 2; i < num; i++ ){
    if(divisor%i==0){
      divisor/=i;
      printf("%d",i);
      Prime=0;
      break;
    }
  }
  if(Prime==1){
    printf("%d",num);
  }else{
    i=2;
    while(i<=num){
      if(divisor%i == 0){
        divisor /= i;
        printf("*%d",i);
      }else{
        i++; 
      }
    }
  }
  printf("\n");
}