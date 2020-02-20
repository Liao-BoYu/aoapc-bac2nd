#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    y = x * sin(1.0/x);
    printf("%f\n",y);
    return 0;
}
