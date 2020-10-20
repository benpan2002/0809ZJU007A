/*
**This is merely for test
*/

# include <stdio.h>
# include <string.h>  

int main(int argc, char const * argv[]){
  // char *s1, *s2;
  // scanf("s1",&s1);
  // scanf("s2",&s2);
  // char *p = strchr(s1,'s2');
  // int cnt = strlen(s2);
  // for(cnt = strlen(s2); cnt>0; cnt--){
  //   *p = '\0';
  //   p++;
  // }
  // printf("%s",p);
  // printf("HeLlo\twoRld");
  printf("\n%d",argc);
  for(;argc>0;argc--){
    printf("%s",argv[argc]);
  }
  return 0;
}