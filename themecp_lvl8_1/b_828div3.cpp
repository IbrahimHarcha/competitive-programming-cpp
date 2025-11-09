#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    int n;
    char c;
    string s;
    cin>>n>>c;
    cin>>s;

    int firstC = 0;
    int lastC = 0;
    int firstG = 0;
    int lastG = 0;

    if(c == 'g'){
        cout<<0<<endl;
        return;
    }

    for(long unsigned int i=0; i<s.length(); i++){
        if(s[i] == c){
            if(!firstC) firstC = i+1;
            lastC = i+1;
        }
        if(s[i] == 'g'){
            if(!firstG) firstG = i+1;
            lastG = i+1;
        }
    }

    // 3 r
    // rgg

    if(lastG > lastC){
        if(lastG==firstG){
          cout<<lastG-firstC<<endl;  
        }else{
            if(firstG > lastC){
                cout<<firstG-lastC<<endl;
            }else{
                cout<<lastG-lastC<<endl;
            }
        }
        return;
    }

    cout<<(n-lastC)+firstG<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}