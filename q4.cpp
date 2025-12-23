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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxdiff = 0;
        sort(arr.begin(), arr.end());
        maxdiff = max((arr[0] - 0), maxdiff);
        maxdiff = max(2 * (x - arr[n - 1]), maxdiff);
        for (int i = 0; i < n - 1; i++)
        {
            maxdiff = max(maxdiff, arr[i + 1] - arr[i]);
        }
        cout << maxdiff << endl;
    }

    return 0;
}
