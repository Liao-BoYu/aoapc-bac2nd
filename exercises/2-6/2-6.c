#include<stdio.h>
int main()
{
    int abc, def, ghi, count = 0;
    for(abc = 123; abc <= 329; abc++)
    {
        int a = abc/100;
        int b = abc/10%10;
        int c = abc%10%10;
        if(a != b && a != c && b != c)
            for(def = 246; def <= 494; def++)
            {
                int d = def/100;
                int e = def/10%10;
                int f = def%10%10;
                if(d != e && d != f && e != f)
                    for(ghi = 369; ghi <= 987; ghi++)
                    {
                        int g = ghi/100;
                        int h = ghi/10%10;
                        int i = ghi%10%10;
                        if(g != h && g != i && h != i && b != d)
                            if(ghi == 3*abc && def == 2*abc && a+b+c+d+e+f+g+h+i == 45)
                                printf("Case %d: %d %d %d\n", ++count, abc, def, ghi);
                    }
            }
    }
    return 0;
}
