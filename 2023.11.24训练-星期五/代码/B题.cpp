#include<iostream>
using namespace std;
long long n, p, c, s;
long long ac, as, bc, bs;
int main() {
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> p >> c >> s;
        if (p == 1)ac += c, as += s;
        if (p == 2)bc += c, bs += s;
    }
    if (ac >= as)cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    if (bc >= bs)cout << "LIVE" << endl;
    else cout << "DEAD" << endl;
    return 0;
}