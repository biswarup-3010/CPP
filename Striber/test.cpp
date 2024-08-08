#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int getcount(int N, int M, string s) {
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= M; ++j) {
            if (j > 0) {
                dp[i][j] = dp[i][j - 1];
                if (s[j - 1] == ')') {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
                }
            }
            if (j < M) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= M; ++j) {
        ans = (ans + dp[N][j]) % MOD;
    }

    return ans;
}

int main() {
    int N, M;
    cin >> N >> M;
    string s;
    cin >> s;

    int result = getcount(N, M, s);
    cout << result << endl;

    return 0;
}
