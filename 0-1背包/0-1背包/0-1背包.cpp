#include <iostream>
#include <cstring>
using namespace std;

const int MAX_N = 1000; // �����Ʒ����
const int MAX_W = 1000; // ��󱳰�����

int N, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N + 1][MAX_W + 1]; // dp[i][j]��ʾǰi����Ʒ��������Ϊj�ı��������ܻ�õ�����ֵ

int main() {
    cin >> W >> N;
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    memset(dp, 0, sizeof(dp)); // ��ʼ��Ϊ0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j >= w[i]) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]); // ת�Ʒ���
            }
            else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl; // �������ֵ
    return 0;
}
