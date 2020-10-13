# include <stdio.h>
# include <stdlib.h>

int main(void){
  int dividend = 1;
  int divisor = 1;
  int quotient = 1;
  int remainder = 1;
  int count = 0;
  int answer[200]={0};
  printf("please input something like a/b : ");
  scanf("%d/%d",&dividend,&divisor);
  //range check
  if(dividend < 10 || divisor <= dividend || divisor > 99){
    return EXIT_FAILURE;
  }
  printf("0.");
  //fill the array
  for( count = 0 ; count < 200 ; count++ ){
    dividend*=10;
    quotient = dividend/divisor;
    remainder = dividend%divisor;
    answer[count] = quotient;
    dividend = remainder;
  }
  //print the array
  for( count = 0 ; count < 200 ; count++ ){
    printf("%d",answer[count]);
  }
  printf("\n");
  if(quotient == 0){
    printf("有限小数");
  }else{
    printf("无限循环小数");
  }
}