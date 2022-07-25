#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string p, q;
        cin >> p >> q;
        for (int j = 0; j < p.length();)
        {
            for (int k = 0; k < q.length();)
            {
                if (p[j] == q[k])
                {
                    p.erase(j);
                    q.erase(k);
                } /**/
            }
        }
    }
}