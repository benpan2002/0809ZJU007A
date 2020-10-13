# include <stdio.h>

int main(void){
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[5];
  //int i;
  //scanf("%d",&i);
  printf("%d",p[-2]);
}