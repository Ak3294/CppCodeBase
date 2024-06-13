#include <iostream>
#include <vector>
using namespace std;
// Function to compute GCD using Euclidean algorithm
int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

vector<long long> findLCMandGCD(int A, int B)
{
    vector<long long> res;

    int gcd_value = gcd(A, B);
    long long lcm_value = (static_cast<long long>(A) * B) / gcd_value;

    res.push_back(gcd_value);
    res.push_back(lcm_value);

    return res;
}

int main()
{
    int A, B;
    cin >> A >> B;
    vector<long long> ans = findLCMandGCD(A, B);

    cout << "GCD is: " << ans[0] << endl;
    cout << "LCM is: " << ans[1] << endl;

    return 0;
}
