# include <stdio.h>
# include <stdlib.h>

int main( int argc, const int *argv[]){
  double a, b, c, tmp;
  printf("Please input lengths of three sides:\n");
  scanf("%lf %lf %lf",&a,&b,&c);
  if(a<=0 || b<=0 || c<=0){
    printf("err");
    return EXIT_FAILURE;
  }
  if(b > a){
    tmp = a;
    a = b;
    b = tmp;
  }
  if(c > b){
    tmp = c;
    c = b;
    b = tmp;
  }
  if(b > a){
    tmp = a;
    a = b;
    b = tmp;
  }

  if(c + b <= a){
    printf("Not a triangle");
  }else if(a==b && b==c){
    printf("Equilateral triangle");
  }else if(c*c + b*b == a*a){
    if(b==c){
      printf("Isosceles right triangle");
    }else{
      printf("Right triangle");
    }
  }else if(a==b || b==c || a==c){
    printf("Isosceles triangle");
  }else{printf("Just a mundane triangle");}
  return EXIT_SUCCESS;
}