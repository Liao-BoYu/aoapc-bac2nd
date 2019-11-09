#include<stdio.h>
int main()
{
    double S = 0;
    double n;
    int i = 1;
    do
    {
        n = 1/2*i-1;
        if (i%2 == 0) S-=n;
        else S+=n;
    }while(n<1e-6);
    printf("%lf\n",S);
    return 0;
}
