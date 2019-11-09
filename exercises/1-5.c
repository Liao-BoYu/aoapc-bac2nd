#include<stdio.h>
int main()
{
    int n;
    double m;
    scanf("%d",&n);
    if (n>3) m = 95*0.85*n;
    else m = 95*n;
    printf("%.2f\n",m);
    return 0;
}
