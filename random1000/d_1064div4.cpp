#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

    for(ll x: prime){
        for(ll i: a){
            if(i % x){
                cout<<x<<endl;
                return;
            }
        }
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