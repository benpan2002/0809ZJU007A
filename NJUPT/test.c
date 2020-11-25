/*
**This is intended for testing anything.
*/

#include <stdio.h>

int main()

{   int a;
    int *p = &a;
    *p = 1;
    printf("%d %d",a,*p);

}