# include <stdio.h>

int main(){
  int number=0;
  printf("Please input the number.");
  scanf("%d",&number);
  if(number<2||number>100000){
    printf("err");
  }else{
    printf("%d=",number);
    int divisor=number;
    int i=2;
    int Prime=1;
    for(i=2;i<number;i++)
    {
      if(divisor%i==0)
      {
        divisor/=i;
        printf("%d",i);
        Prime=0;
        break;
      }
    }
    if(Prime==1){
      printf("%d",number);
    }else{
      i=2;
      while(i<=number)
      {
        if(divisor%i==0)
        {
          divisor/=i;
          printf("x%d",i);
        }else{
        i++; 
        }
      }
    }
  }
  return 0;
}