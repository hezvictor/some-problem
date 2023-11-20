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
        sum += matrix[i][i]; // �������Խ���Ԫ�صĺ�
        sum += matrix[i][n - 1 - i]; // ����ζԽ���Ԫ�صĺ�
        sum += matrix[mid_row][i]; // �����м���Ԫ�صĺ�
        sum += matrix[i][mid_col]; // �����м���Ԫ�صĺ�
    }

    // ��ȥ�ظ������Ԫ�أ����м��к��м��л������n��
    sum -= 3 * matrix[mid_row][mid_col];
    
    cout << sum << endl;

    return 0;
}