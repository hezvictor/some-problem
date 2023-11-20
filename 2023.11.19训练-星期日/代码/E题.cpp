#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;

    if ((a < k && b % k != 0) || (b < k && a % k != 0)) {
        cout << -1;
        return 0;
    }

    int num = a / k + b / k;
    cout << num;
    return 0;

}