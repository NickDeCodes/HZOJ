/*************************************************************************
	> File Name: 50.cpp
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 日  5/26 21:02:00 2019
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 32
#define MAX_k 65536
long long dp[MAX_N + 5][MAX_k + 5];

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 1) {
        cout << m << endl;
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; dp[i][j - 1] < m; j++) {
            long long val1;
            if (i - 1 == 1) val1 = j - 1;
            else val1 = dp[i - 1][j - 1];
            dp[i][j] = val1 + dp[i][j - 1] + 1;

        }
    }
    int k = 1;
    while (dp[n][k] < m) k++;
    cout << k << endl;
    return 0;
}
