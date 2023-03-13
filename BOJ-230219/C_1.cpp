#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<double> q;
    int n, m, k, ans = 0;
    double s = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        q.push(k * 0.001);
        s += k * 0.001;
        if (q.size() > m)
        {
            s -= q.front();
            q.pop();
        }
        if (0.129 <= s && s <= 0.138)
        {
            ans++;
        }
    }
    cout << ans;
}