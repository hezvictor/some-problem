#include<bits/stdc++.h> //����ͷ�ļ� 
using namespace std;
struct node {
	int x, y, s;
} d[200000];
int n, m, ans, num, f[1000], w, k, c;
bool ok[1000];
bool cmp(node a, node b) { //���Ż����� 
	return a.s < b.s;
}
int gf(int x) { // �Ұְ� 
	if (f[x] == x)return x;
	return f[x] = gf(f[x]); //ѹ��·�� 
}
void work() { //kruskal�ĺ��Ĵ��� 
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
			if (i >= j || w == 0)continue; //�����ظ��ĺͱ������ߣ�ֱ�ӹ� 
			d[++k].x = i;
			d[k].y = j;
			d[k].s = w;
			if (d[k].s > m)num++; //ͳ���Żݺ�ļ۸���Ȼ����ԭ�۵���Ŀ 
		}
	sort(d + 1, d + k + 1, cmp); //�����ʱ��Ҫע�⣬��Ȼͳ���˼۸��ߵ���Ŀ�����Ƚ�ʱ����Ҫȫ��һ��� 
	work();
	if (c == n - 1)cout << ans + m; //����ж�һ���Ƿ����еĵ㶼��������������Ǿͼ���ԭ�ۣ���������ʣ������Ŀ*ԭ�� 
	else cout << ans + (n - c) * m;
	return 0;
}