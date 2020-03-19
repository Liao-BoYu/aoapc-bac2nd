#include<stdio.h>
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    double i;
    for(i = 0; i != 10; i += 0.1)
    {
        printf("%.1f\n", i);
#ifdef LOCAL
        if(i >= 100) break;
#endif
    }
    return 0;
}
