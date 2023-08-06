#include <iostream>
using namespace std;
int main()
{
    int ds[10] = {0};
    int b;
    for (int i = 0; i < 5; i++)
    {
        cin >> b;
        ds[b]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (ds[i] % 2 != 0)
        {
            cout << i;
        }
    }
}