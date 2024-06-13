// Print Fabonaaci Series using dynamic Programming.

#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << "nth Term Value is "<<fib(n, dp) << endl;
    return 0;
}