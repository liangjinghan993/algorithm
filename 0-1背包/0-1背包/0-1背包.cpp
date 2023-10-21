#include <iostream>
#include <cstring>
using namespace std;

const int MAX_N = 1000; // 最大物品数量
const int MAX_W = 1000; // 最大背包容量

int N, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N + 1][MAX_W + 1]; // dp[i][j]表示前i个物品放入容量为j的背包中所能获得的最大价值

int main() {
    cin >> W >> N;
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    memset(dp, 0, sizeof(dp)); // 初始化为0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j >= w[i]) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]); // 转移方程
            }
            else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl; // 输出最大价值
    return 0;
}
