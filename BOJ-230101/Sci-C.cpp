#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    vector<int> v;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, sum = 0, nsum = 0, k, u;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) //(n*(n-1))/2
    {
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            u = abs(v[i] - v[j]);
            if (v[i] != v[j])
            {
                sum += y;
                u = (u / x) * y;
                if (i == 0)
                {
                    if (v[i] < v[j])
                    {
                        nsum += u + y;
                    }
                    nsum %= 998244353;
                }

                sum += u;
                sum %= 998244353;
            }
        }
    }
    cout << sum << " " << nsum;
}
////