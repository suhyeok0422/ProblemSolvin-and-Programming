#include <stdio.h>
int main()
{
int a, b, c, ans ;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c)
        ans = 10000 + 1000*a;
    else if (a==b || a==c)
        ans = 1000 + 100*a;
    else if (b == c)
        ans = 1000 + 100 *b;
    else 
    {
        if(a>b && a>c)
            ans = a*100;
        else if(b>a && b>c)
            ans = b*100;
        else if (c>a && c>b)
            ans = c *100;

    }
    printf("%d", ans);
    return 0;
}
