/*
**This is intended for "软件技术部招新试题" No.2
*/

# include <stdio.h>
# include <stdlib.h>

int main(void){
  int number = 0;
  int i = 2;
  int isPrime = 1;
  printf("Please input a number : ");
  scanf("%d",&number);
  //range check
  if(number < 2){
    printf("err");
    return EXIT_FAILURE;

  }
  if(number < 3){
    isPrime = 1;

  }else{
    for(i = 2 ; i < number ; i++){
      if(number%i == 0){
        isPrime = 0;
        break;
      }
    }
    
  }
  if(isPrime == 0){
      printf("%d is Composite",number);

    }else{
      printf("%d is Prime",number);
    }
    return EXIT_SUCCESS;
  
}