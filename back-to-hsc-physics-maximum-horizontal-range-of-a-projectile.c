#include <stdio.h>
#define pi 3.1416
int main()
{
    double v,x,r;
    while(scanf("%lf",&v)!=EOF)
    {
        x=sin(2*(pi/4));
        r=((v*v)*x)/9.8;
        printf("%.2lf\n",r);

    }
    return 0;
}
