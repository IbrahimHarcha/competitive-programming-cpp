#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve(){
    string a, b;
    cin>>a>>b;

    for(long unsigned int i=0; i<a.length()-1; i++){
        if(a[i] == '0' && a[i] == b[i] && a[i+1] == b[i+1] && b[i+1] == '1'){
            cout<<"YES";
            return;
        }
    }

    cout<<"NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin>>t;
    
    while(t--){
        solve();
        cout<<endl;
    }
    
    return 0;
}