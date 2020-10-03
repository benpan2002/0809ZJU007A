# include <stdio.h>

/**
 * [bp]:
 * 1. code style: use space in operator like =, <. etc.
 * 2. please mark the question url: 第5周 编程作业
 * https://mooc.study.163.com/learn/1000002011?tid=2403026001#/learn/content?type=detail&id=2403363446
 * 3. please add some notes in codes, so let other easy to know what you think.
 * 4. should use function like is_prime(int n).
*/
int main(){
  int number = 0;
  printf("Please input the number.");
  scanf("%d", &number);
  if (number<2 || number>100000){
    printf("err");
    // bp: here can return directly, avoid too many level of {}.
    return 1;
  }
  // else{
    printf("%d=",number);
    int divisor=number;
    int i=2;
    int Prime=1;
    // bp: check number is prime self.
    // or first one.
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
      // bp: try to divide 
      i=2;
      while(i<=number)
      {
        if(divisor%i == 0)
        {
          divisor /= i;
          printf("x%d",i);
        }else{
          i++; 
        }
      }
    }
  // }
  return 0;
}