# include <stdio.h>

#define TRUE 1
#define FALSE 0
#define boolean int
/**
 * Definite a variable which is available in every part in a bid to show
 * whether certain number will be printed or not 
*/
boolean complete_number(int testnumber){
  boolean isComplete = FALSE;
  //
  int i = 1;
  int sum = 0;
 
  for(i = 1 ; i < testnumber ; i++){
    if(testnumber % i == 0){
      sum+=i;
    }
  }
  if(testnumber == sum){
    isComplete = TRUE;
   
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
  printf("======\n");
  //Range judgement
  int count = 0;
 
  for(testnumber = start ; testnumber <= end ; testnumber++){
    boolean isComplete = complete_number(testnumber);
    if (isComplete) {
      if(count >= 1){
        printf(" ");
      }
      printf("%d",testnumber);
      count++;
    }
  }
  if(count == 0){
    printf("\n");
  }
  //Find every 'complete number'
  printf("======\n");
  return 0;
}