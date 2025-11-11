#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int n,s;
    cin>>n>>s;

    int ans = 0;
    
    for(int i=0; i<n; i++){
        int dx, dy, xi, yi;
        cin>>dx>>dy>>xi>>yi;
        if((xi + yi == s && dx + dy == 0) || (xi == yi && abs(dx + dy) == 2)){
            ans++;
        }
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}