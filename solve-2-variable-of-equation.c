#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double a1,b1,c1;
    double a2,b2,c2;
    double x,y;
    scanf("%lfx%lfy=%lf",&a1,&b1,&c1);
    scanf("%lfx%lfy=%lf",&a2,&b2,&c2);
    y=(c2-(a2*(c1/a1)))/(-a2*(b1/a1)+b2);
    x=((c1-(b1*y))/a1);
    printf("x=%.2lf\ty=%.2lf\n",x,y);
    return 0;
}
