#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    vector<int>s(m);
    vector<int>c(m);
    rep(i,m){
        cin>>s[i]>>c[i];
        s[i]--;
    }
    vector<int>ans(n,0);
    vector<bool>flag(n,false);
    rep(i,m){
        if(flag[s[i]]==true&&ans[s[i]]!=c[i]){
            cout<<-1<<endl;
            return 0;
        }
        else if(s[i]==0&&c[i]==0&&n!=1){
            cout<<-1<<endl;
            return 0;
        }
        else{
            ans[s[i]]=c[i];
            flag[s[i]]=true;
        }
    }
    if(n!=1&&ans[0]==0)cout<<1;
    else cout<<ans[0];
    for(int i=1;i<n;i++){
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}