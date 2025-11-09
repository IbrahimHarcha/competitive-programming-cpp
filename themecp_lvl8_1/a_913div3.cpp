#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    string s;
    cin>>s;

    vector<char> letter = {'a','b','c','d','e','f','g','h'};
    vector<char> number = {'1','2','3','4','5','6','7','8'};

    for(char l: letter){
        string horiz = string(1,l) + s[1];
        if(horiz != s) cout<<horiz<<endl;
    }

    for(char n: number){
        string verti = s[0] + string(1,n);
        if(verti != s) cout<<verti<<endl;
    }
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}