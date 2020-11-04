# include <stdio.h>
# include <stdlib.h>

int main()
{
  int start=0;
  int end=2;
  int cnt=10;
  int i=2;
  int x=29;
  int IsPrime=1;
  int print=0;
  printf("Please edit two numbers (start end ) : ");
  scanf("%d %d",&start,&end);
  if(start < 10 || end > 1000 || start > end){
    printf("Please input again\n");
    return EXIT_FAILURE;
  }
  while(cnt < end){
    while(cnt <= start){
    for(i=2;i<x;i++){
      if(x%i==0){
        IsPrime=0;
        break;
      }
    }
    
    if(IsPrime==1){
      cnt++;        
    }
    IsPrime=1;
    x++;
    }    
    while(cnt < end){
    for(i=2;i<x;i++){
      if(x%i==0){
        IsPrime=0;
        break;
      }
    }
    
    if(IsPrime==1){
      printf("%d ",x);
      cnt++;        
      print++;
      if(print==5){
        printf("\n");
        print = 0;
      }
    }
    IsPrime=1;
    x++;
    }
  }
  return EXIT_SUCCESS;
}