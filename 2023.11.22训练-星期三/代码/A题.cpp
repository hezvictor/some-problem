#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    int a, b;
    int cnt = 0;
    for (a = 0;a <=n ;a++) {
        for (b = 0;b <=m;b++) {
            if (n == a * a + b && m == a + b * b) {
                   cnt++;
             }
        }
    }
    cout << cnt;
    
   
    return 0;
}