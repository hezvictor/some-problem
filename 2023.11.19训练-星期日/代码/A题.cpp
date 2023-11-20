#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[11][11];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    int mid_row = (n - 1) / 2;
    int mid_col = (n - 1) / 2;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // 计算主对角线元素的和
        sum += matrix[i][n - 1 - i]; // 计算次对角线元素的和
        sum += matrix[mid_row][i]; // 计算中间行元素的和
        sum += matrix[i][mid_col]; // 计算中间列元素的和
    }

    // 减去重复计算的元素，即中间行和中间列还会计算n次
    sum -= 3 * matrix[mid_row][mid_col];
    
    cout << sum << endl;

    return 0;
}