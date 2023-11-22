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
    sort(storage.begin(), storage.end());//��Di��С��������,��ͬ��Di��Pi��С��������

    //�ɷ��ڵ�̰���㷨
    ll ans = 0;//ans��long long�����ݹ���
    priority_queue<int, vector<int>, greater<int>> q;//�������ͣ������������������
    //���ȶ��б�֤��С��Pi����top
    //���ȶ��дӴ�С���򣬳����д�С���������
    for (int i = 0; i < n; i++) {
        if (storage[i].first <= q.size()) {//��Di <= ��ǰ�Ĺ�����
            if (storage[i].second > q.top()) {//�����Ƿ��ڵ��жϣ����Pi�����ȶ��е�top(����С��pi)��Ҫ��
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
