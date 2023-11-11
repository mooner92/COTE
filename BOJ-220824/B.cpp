#include <stdio.h>
int main()
{
    int n, m;
    bool A_flag = true, B_flag = true;
    long long ds[300001] = {
        0,
    };
    int A_idx = 0, B_idx = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ds[i]);
        if (i > 1)
        {
            if (ds[i] - ds[i - 1] != ds[i - 1] - ds[i - 2])
            {
                A_flag = false;
                A_idx += i;
            }
            if (ds[i] / ds[i - 1] != ds[i - 1] / ds[i - 2])
            {
                B_flag = false;
                B_idx += i;
            }
        }
    }
    long long g, h;
    for (int j = 0; j < m; j++)
    {
        scanf("%lld %lld", &g, &h);
        if (g == A_idx)
            A_flag = true;
        if (g == B_idx)
            B_flag = true;
        if (A_flag)
        {
            printf("+\n");
        }
        else if ()
    }
}
