#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
    ll n, q;
    cin>>n>>q;
    string s;
    cin>>s;

    while(q--){
        ll a;
        cin>>a;
        ll ans = 0;
        int curr = 0;

        while(a > 0){
            if(s[curr]=='A'){
                a--;
            }else{
                a /= 2;
            }
            ans++;
            curr = (curr + 1) % n;
        }

        cout<<ans<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}