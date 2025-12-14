#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[j]%a[i])%2 == 0){
                cout<<a[i]<<" "<<a[j]<<endl;
                return;
            }
        }
    }

    cout<<-1<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}