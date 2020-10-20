/*
**This is made for working out an equation
*/

# include <stdio.h>
# include <math.h>
// int main22(void){
//   double a = 8, b = 16, c = 2;
//   double delta = b*b-4*a*c;
//   double a3 = (a+sqrt(delta))/(c*b);
//   // double a1 = -b-a3;
//   // double a2 = a1/(2*a);
//   printf("%f",a3);
//   // double x1 = (-b-sqrt(delta))/(2*a);
//   return 0;
// }
int main(void){
  int a = 0, b = 0, c = 0;
  const double MIN = 1e-12;
  printf("Please input a equation, like 'ax^2+bx+c=0'\n");
  scanf("%dx^2+%dx+%d=0",&a,&b,&c);
  double delta = b*b-4*a*c;
  double x1 = 0, x2 = 0;
  if(delta >= -MIN && delta <= MIN){
    x1 = -b/(2*a);
    printf("The answer is 'x1 = x2 = %f'", x1);
  }
  else if(delta < -MIN){
    printf("There is no answer.");
  }
  else{
    x1 = (-b-sqrt(delta))/(2*a);
    x2 = (-b+sqrt(delta))/(2*a);
    printf("The answer is 'x1 = %f, x2 = %f'", x1,x2);
  }
  return 0;
}