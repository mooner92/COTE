#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int q;
        cin >> q;
        vector<int> k;
        for (int j = 0; j < q; j++)
        {
            int h;
            cin >> h;
            k.push_back(h); // 벡터 만들어줌
        }
        stable_sort(k.begin(), k.end());
        reverse(k.begin(), k.end());
        cout << k[0] + k[1] << "\n";
    }
}
