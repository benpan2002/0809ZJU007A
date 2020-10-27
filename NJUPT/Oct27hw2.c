/*
**B20011232 2020 27 Oct
**This is for the second question
**To separate the part of finding the numbers and 
**the part of outputing the numbers, I use the array.
*/

# include <stdio.h>
# define START 11
# define END 200

int main(int argc, char const *argv[]){
  int num = START, a = 0, b = 0, mun = 0, cnt = 0, size = END-START+1;
  // int *palindrome;
  int palindrome[END-START+1] = {0};
  for( num = START; num <= END; num++){
    b = num;
    while(b > 9){
      a = b%10;
      b/=10;
      mun+=a;
      mun*=10;
    }
    mun+=b;
    if(num == mun){
      palindrome[cnt]=num;
      cnt++;
    }
    mun = 0;
  }
  const int MAX = cnt;
  for(cnt = 0; cnt < MAX; cnt++){
    printf("%d\t",palindrome[cnt]);
    if(cnt%5 == 4){
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}