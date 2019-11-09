#include<stdio.h>
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a, b, c, kase = 0;
    while(scanf("%d%d%d", &a, &b, &c) == 3)
    {
        int n = 1;
        for(int i = 10; i <= 100; i++)
        {
            if(i%3 == a && i%5 == b && i%7 == c)
            {
                printf("Case %d: %d\n", ++kase, i);
                n = 0;
                break;
            }
        }
        if(n) printf("Case %d: No answer\n",++kase);
    }
    return 0;
}
