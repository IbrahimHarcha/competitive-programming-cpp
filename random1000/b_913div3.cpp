#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) (x).begin(), (x).end()

// uppercase : 65 -> 90
// lowercase : 97 -> 122

void solve(){
    string s;
    cin>>s;

    int n = s.length();

    string ans = "";
    vector<int> toadd(n,1);
    vector<int> idx_lower;
    vector<int> idx_upper;

    for(int i=0; i<n; i++){
        int curr = s[i];
        if(curr == 'b'){
            toadd[i] = 0;
            if(!idx_lower.empty()){
                toadd[idx_lower.back()] = 0;
                idx_lower.pop_back();
            }
        }else if(curr == 'B'){
            toadd[i] = 0;
            if(!idx_upper.empty()){
                toadd[idx_upper.back()] = 0;
                idx_upper.pop_back();
            }
        }else{
            if(islower(s[i])){
                idx_lower.push_back(i);
            }else{
                idx_upper.push_back(i);
            }
        }
    }

    for(int i=0; i<n; i++){
        if(toadd[i]){
            ans += s[i];
        }
    }

    cout<<ans<<endl;
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