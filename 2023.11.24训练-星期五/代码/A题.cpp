#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a;
    cin >> a;
    int t = a.size();
    sort(a.begin(),a.end());
    int cnt = 0;
    for (int i = 0;i < t;i++) {
        if (a[i] != a[i + 1]) {
            cnt++;;
        }
    }
    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
   
    return 0;
}