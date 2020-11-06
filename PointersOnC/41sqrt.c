//work out number's square root
//Page63

# include <stdio.h>
# include <stdlib.h>

int main(int argc, const int *argv[]){
  double num = 0, i = 1, square = 0, root = 1, multiple = 10;
  int cnt = 1;
  printf("Please input something and you'll get its square root:  ");
  scanf("%lf",&num);
  if(num<0){
    printf("err.");
    return EXIT_FAILURE;
  }
  for(cnt=1; cnt<=4; cnt++){
    multiple*=0.1;
    for(i = root; ; i+=multiple){
      square = i * i;
      if(square >= num){
        root = i-multiple;
        break;
      }
    }
  }
  printf("The square root = %.3f",root);
  return EXIT_SUCCESS;
}