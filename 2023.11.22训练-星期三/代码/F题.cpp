#include<bits/stdc++.h>

using namespace std;
#define endl '\n'
using ll = long long;
using PII = pair<ll, ll>;

int main() {
    int n;
    cin >> n;
    vector<PII> storage;
    for (int i = 0; i < n; i++) {
        int d, t;
        cin >> d >> t;
        storage.push_back(make_pair(d, t));
    }
    sort(storage.begin(), storage.end());//按Di从小到大排序,相同的Di按Pi从小到大排序

    //可反悔的贪心算法
    ll ans = 0;//ans开long long，数据过大
    priority_queue<int, vector<int>, greater<int>> q;//数据类型，接收容器，排序规则
    //优先队列保证最小的Pi放在top
    //优先队列从大到小排序，出队列从小到大出队列
    for (int i = 0; i < n; i++) {
        if (storage[i].first <= q.size()) {//当Di <= 当前的工作日
            if (storage[i].second > q.top()) {//这里是反悔的判断，如果Pi比优先队列的top(即最小的pi)都要大
                ans -= q.top();
                ans += storage[i].second;
                q.pop();
                q.push(storage[i].second);
            }
        }
        else {
            q.push(storage[i].second);
            ans += storage[i].second;
        }
    }
    cout << ans << endl;
    return 0;
    //1
}
