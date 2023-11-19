#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> vp1;
    int n;
    cin >> n;
    int a, ah, b, bh;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> ah;
        pair p1 = make_pair(a, ah);
        vp1.push_back(p1);
    }
    sort(vp1.begin(), vp1.end());
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        a = vp1[i].first;
        ah = vp1[i].second;
        b = vp1[i + 1].first;
        bh = vp1[i + 1].second;
        if ((ah / 2 + bh / 2) > abs(b - a) - 1)
        {
            if ((ah / 2) > (bh / 2))
                t = (ah / 2) - 1;
            else
                t = (bh / 2) - 1;
            flag = false;
        }
    }
    if (flag)
    {
        cout << "forever";
        return 0;
    }
    else
    {
        cout << t;
    }
}