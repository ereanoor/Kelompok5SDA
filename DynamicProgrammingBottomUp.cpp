#include <iostream>
#include <vector>
using namespace std;

int fibonacci_bottom_up(int n) {
    if (n <= 1) return n;
    vector<int> dp(n+1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int n = 9;
    cout << "Fibonacci ke-9 = " << fibonacci_bottom_up(n) << endl;
    return 0;
}
