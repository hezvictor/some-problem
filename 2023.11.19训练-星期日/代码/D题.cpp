#include<bits/stdc++.h> //万能头文件 
using namespace std;
struct node {
	int x, y, s;
} d[200000];
int n, m, ans, num, f[1000], w, k, c;
bool ok[1000];
bool cmp(node a, node b) { //按优惠排序 
	return a.s < b.s;
}
int gf(int x) { // 找爸爸 
	if (f[x] == x)return x;
	return f[x] = gf(f[x]); //压缩路径 
}
void work() { //kruskal的核心代码 
	int x, y;
	for (int i = 1; i <= n; i++)f[i] = i;
	for (int i = 1; i <= k - num; i++) {
		x = gf(d[i].x);
		y = gf(d[i].y);
		if (x != y) {
			f[x] = y;
			c++;
			ans += d[i].s;
		}

	}
}
int main() {
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> w;
			if (i >= j || w == 0)continue; //对于重复的和本身不建边，直接过 
			d[++k].x = i;
			d[k].y = j;
			d[k].s = w;
			if (d[k].s > m)num++; //统计优惠后的价格仍然大于原价的数目 
		}
	sort(d + 1, d + k + 1, cmp); //排序的时候要注意，虽然统计了价格变高的数目，但比较时还是要全部一起比 
	work();
	if (c == n - 1)cout << ans + m; //最后判断一下是否所有的点都连了起来，如果是就加上原价；如果否加上剩余点的数目*原价 
	else cout << ans + (n - c) * m;
	return 0;
}