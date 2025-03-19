#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int l = 0, r = mx, ans = r;
        while (l <= r)
        {
            int mid = (l + r) / 2, seg = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B' && a[i] > mid)
                {
                    seg++;
                    while (i < n && (s[i] != 'R' || a[i] <= mid))
                        i++;
                }
            }
            if (seg <= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}