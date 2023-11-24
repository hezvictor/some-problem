#include <stdio.h>
#include <string.h>
#include <algorithm>
#define maxn 3030
using namespace std;
int a[maxn];
struct node
{
	int x, y;
}s[maxn];
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int cnt = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int minn = a[i];
			s[cnt].x = i;
			int minj = i;
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < minn)
				{
					minn = a[j];
					minj = j;
				}
			}
			if (minj == i)
				continue;
			s[cnt++].y = minj;
			swap(a[i], a[minj]);
		}
		printf("%d\n", cnt);
		for (int i = 0; i < cnt; i++)
			printf("%d %d\n", s[i].x, s[i].y);
	}
	return 0;
}