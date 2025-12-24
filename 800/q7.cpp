#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int cnt = 0;
        // if (x.find(s) != string::npos)
        //     cout << cnt << endl;
        int c = 5;
        while (c--)
        {
            if (x.find(s) != string::npos)
                break;
            cnt++;
            x += x;
        }
        if (x.find(s) != string::npos)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}