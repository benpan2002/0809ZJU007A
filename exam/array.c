# include <stdio.h>

int main(){
  char str[2][6]={"sun","moon"};
  int i,j;
  int len[2];
  for(i = 0; i < 2; i++){
    for(j = 0; j < 6; j++)
      if(str[i][j] == '\0'){
        len[i]=j;
        break;
      }
      printf("%d",j);
    
  }
}