#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        ll m;
        
        cin >> n >> m;

        vector<ll> a(n + 1);
        
        vector<int> b(n + 1);
        
        a[0] = 0; b[0] = 0;

        for (int i = 1; i <= n; i++)
            cin >> a[i] >> b[i];

        ll ans = 0;

        for (int i = 1; i <= n; i++) {
            ll d = a[i] - a[i - 1];
            
            int s = b[i - 1], tside = b[i];
            
            if (s == tside)
                ans += d - (d % 2);
            else
                ans += d - ((d + 1) % 2);
        }

        ll d = m - a[n];
        
        ll same = d - (d % 2);
        
        ll diff = d - ((d + 1) % 2);
        
        ans += max(same, diff);

        cout << ans << endl;
    }
}
