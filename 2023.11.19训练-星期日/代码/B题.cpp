#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[105];
    double sum = 0.0;
    for (int i = 0;i < n;i++) {
        cin >> p[i];
    }
    for (int i = 0;i < n;i++) {
        sum += p[i];
    }
    double t = n * 100.0;
    double ret = sum / t;
    ret *= 100;
    printf("%.12lf", ret);
    return 0;
}