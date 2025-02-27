#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t[4] = {0}, n, a[100001] = {0}, mi = 100001;
    bool bj[100001] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t[a[i]]++;
    }
    for (int i = 1; i <= 3; i++)
        mi = min(mi, t[i]);
    cout << mi << endl;
    for (int i = 1; i <= mi; i++)
    {
        bool s[4] = {0};
        for (int j = 1; j <= n; j++)
        {
            if (s[a[j]] == 0 && bj[j] == 0)
            {
                cout << j << " ";
                bj[j] = 1;
                s[a[j]] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}