#include <stdio.h>

int res = -1;
int now;
int y, x;

int main()
{
    for (int i = 0;i < 9;i++) 
    {
        for (int j = 0;j < 9;j++)
        {
            scanf("%d", &now);
            
            if (now > res) 
            {
                res = now;
                y = i + 1;
                x = j + 1;
            }
        }
    }
    printf("%d\n%d %d", res, y, x);
}
