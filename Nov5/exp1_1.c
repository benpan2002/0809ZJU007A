# include <stdio.h>

int main( int argc , const int *argv[]){
  int a = 0, b = 0, sum = 0, difference = 0, product = 0;
  double quotient = 0, ave = 0;
  printf("Please input a and b\n");
  scanf("%d %d",&a,&b);
  sum = a + b;
  difference = a - b;
  //pretending that the difference equals a minus b
  product = a * b;
  quotient = (a*1.0) / (b*1.0);
  //pretending that the quotient equals a divided by b
  ave = (a*1.0 + b*1.0) / 2;
  printf("a + b = %d\na - b = %d\na * b = %d\na / b = %f\nThe averge is %f\n",sum,difference,product,quotient,ave);
  return 0;
}