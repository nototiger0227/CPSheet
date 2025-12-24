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
        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        cout << 0 - sum << endl;
    }

    return 0;
}