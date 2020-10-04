#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;
    int ans=-1;
    for(int i=0;i<s.size();i++){
        int cnt=0;
        for(int j=i;j<s.size();j++){
            if(s[j]=='A'||s[j]=='T'||s[j]=='C'||s[j]=='G'){
                cnt++;
            }
            else{
                break;
            }
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;

    return 0;
}