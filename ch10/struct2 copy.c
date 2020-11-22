#include <stdio.h>

typedef struct {
    int x;
    int y;
    int *p;
} point;

point getStruct(void);
void output(point s);

int main(int argc, char const *argv[]) {
    point y = {0,0};
    y = getStruct();
    output(y);
    return 0;
}

point getStruct(void) {
    point s;
    scanf("%d",&s.x);
    scanf("%d",&s.y);
    printf("%d,%d\n",s.x,s.y);
    return s;
}

void output (point s) {
    printf("%d,%d",s.x,s.y);
}