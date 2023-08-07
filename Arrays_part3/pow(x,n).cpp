// Implement Pow(x,n) | X raised to the power N

// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {

        double ans = 1.0;
        long long n1 = n; // Coverting "int" to "long long" to handle potential overflow issues when dealing with very large exponents.

        if (n1 < 0)
        {
            n1 = -1 * n1;
        }

        while (n1)
        {
            if (n1 % 2)
            {
                ans = ans * x;
                n1 = n1 - 1;
            }
            else
            {
                x = x * x;
                n1 = n1 / 2;
            }
        }

        if (n < 0)
        {
            ans = (double)(1.0) / (double)(ans);
        }

        return ans;
    }
};