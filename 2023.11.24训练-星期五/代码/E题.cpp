
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int num[1000010];
int main()
{
    int T, n, m, p;
    int i, j;
    int cnt = 1;

    while (~scanf("%d", &T))
    {
        for (i = 1; i <= T; i++)
        {
            scanf("%d", &n);
            for (j = 1; j <= n; j++)
                num[cnt++] = i;
        }
        scanf("%d", &m);
        for (i = 1; i <= m; i++)
        {
            scanf("%d", &p);
            printf("%d\n", num[p]);
        }
    }
    return 0;
}

