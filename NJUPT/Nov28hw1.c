#include <stdio.h>
#include <math.h>

double vo(double r, double h){
    double v = (3.14*r*r*h)/3;
    return v;
}

double sq(double r, double h) {
    double s = (6.28*r*sqrt(h*h+r*r))/2+3.14*r*r;
    return s;
}
int main(void) {
    double r, h, v, s;
    scanf("%lf %lf",&r,&h);
    v = vo(r,h);
    s = sq(r,h);
    printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,s,v);
    return 0;
}