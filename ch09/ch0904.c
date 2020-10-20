# include <stdio.h>
# include <stdlib.h>

int main(void){
  void *p;
  int cnt = 0;
  p = malloc(100*1024*1024);
  cnt++;
  // free(p);
  p++;
  free(p++);
  printf("分配了%d00MB的空间\n",cnt);
  return 0;
}