# include <stdio.h>


#include <stdio.h>
void swap(int* a, int* b);
int main()
{
    int a = 5;
    int b = 6;
    printf("%d-%d\n", a, b);
    swap(&a, &b);
    printf("%d-%d\n", a, b);
    return 0;
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("%d-%d\n", *a, *b);
}


int mainxxx(){
  printf("---------------\n");
double x=3.45678;
printf("%6.2f",x);

getchar();
  return 0;
}