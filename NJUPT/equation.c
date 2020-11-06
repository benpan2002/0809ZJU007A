/*
**This is made for working out an equation
*/

#include <stdio.h>
#include <math.h>

int main(void){
  double a = 0, b = 0, c = 0;
  const double MIN = 1e-12;
  printf("Please input a equation, like 'ax^2+bx+c=0'\n");
  scanf("%lfx^2+%lfx+%lf=0",&a,&b,&c);
  double delta = b*b - 4*a*c;
  double x1 = 0, x2 = 0;
  if ( delta >= -MIN && delta <= MIN ) {
    x1 = -b/(2*a);
    printf("The answer is 'x1 = x2 = %f'", x1);
  } else if ( delta < -MIN ){
    printf("There is no answer.");
  } else {
    double i = sqrt(delta);
    x1 = (-b-i)/(2*a);
    x2 = (-b+i)/(2*a);
    printf("The answer is 'x1 = %f, x2 = %f'", x1,x2);
  }
  return 0;
}