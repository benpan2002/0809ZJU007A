/*
**This is intended for P85
*/

# include <stdio.h>

void function(int num);

int main(void){
  int num;
  printf("Input something:\n");
  scanf("%d",&num);
  function(num);
  return 0;
}

void function(int num){
  int i;
  if(!num){
    printf("%d",i);
    function(num/10);
    i = num%10;
  }
}