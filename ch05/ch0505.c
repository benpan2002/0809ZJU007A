# include <stdio.h>

int Iscomplete = 0;

int complete_number(int testnumber){
  int i = 1;
  int sum = 0;
  for(i = 1 ; i < testnumber ; i++){
    if(testnumber % i == 0){
      sum+=i;
    }
  }
  if(testnumber == sum){
    printf("%d ",sum);
    Iscomplete = 1;
  }
}

int main(){
  int start = 1;
  int testnumber = 1;
  int end = 2;
  printf("Please input n and m, 1<=n<m<1000 .");
  scanf("%d %d",&start,&end);
  if(start < 1 || start >= end || end >= 1000){
    return;
  }
  for(testnumber = start ; testnumber <= end ; testnumber++){
    complete_number(testnumber);}
    if(Iscomplete = 1){
      printf("\b");
    }else{
      printf("\n");
    }
  

  return 0;
}