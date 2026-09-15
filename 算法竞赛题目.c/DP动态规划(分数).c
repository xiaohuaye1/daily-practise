#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int dp[201][7] = {0}; 
    // 初始条件：0分成0份有一种方法
    dp[0][0] = 1;
    // 动态规划填表
    for (int i = 1; i <= n; i++) {          // i 是要分的数
        for (int j = 1; j <= k; j++) {      // j 是要分的份数
            if (i < j) {
                // 如果 i 比 j 小，不可能分成 j 份正整数
                dp[i][j] = 0;
            } else {
                // 核心公式：
                // 情况1：最小的那份是1 -> 去掉这个1，剩下 i-1 分成 j-1 份
                // 情况2：最小的那份 ≥2 -> 每份都减1，变成 i-j 分成 j 份
                dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
            }
        }
    }
    printf("%d\n", dp[n][k]);
    return 0;
}