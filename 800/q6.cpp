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
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp.size() >= 3)
            cout << "NO" << endl;
        else if (mp.size() == 1)
            cout << "YES" << endl;
        else
        {
            int f1 = mp.begin()->second;
            int f2 = mp.rbegin()->second;
            if (abs(f1 - f2) > 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}