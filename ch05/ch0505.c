# include <stdio.h>

/**
 * 
*/
int complete_number(int testnumber){
  int isComplete = 0;
  //Definite a variable which is available in every part in a bid to show whether certain number will be printed or not 
  int i = 1;
  int sum = 0;
  for(i = 1 ; i < testnumber ; i++){
    if(testnumber % i == 0){
      sum+=i;
    }
  }
  if(testnumber == sum){
    printf("%d ",sum);
    isComplete = 1;
  }
  return isComplete;
}
//Creat a function in a bid to judge whether a number is a 'complete number'

int main(){
  int start = 1;
  int testnumber = 1;
  int end = 2;
  printf("Please input n and m, 1<=n<m<1000 .");
  scanf("%d %d",&start,&end);
  if(start < 1 || start >= end || end >= 1000){
    return -1;
  }
  //Range judgement
  int isComplete = 0;
  for(testnumber = start ; testnumber <= end ; testnumber++){
    isComplete = complete_number(testnumber);
  }
  if(isComplete == 1){
    printf("\b");
  }else{
    printf("\n");
  }
  //Find every 'complete number'

  return 0;
}