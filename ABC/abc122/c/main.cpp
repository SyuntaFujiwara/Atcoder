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

    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>l(q);
    vector<int>r(q);
    rep(i,q)cin>>l[i]>>r[i];
    vector<int>sum(n);
    sum[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]=='C'&&s[i-1]=='A'){
            sum[i]=sum[i-1]+1;
        }
        else{
            sum[i]=sum[i-1];
        }
    }
    rep(i,q){
        cout<<sum[r[i]-1]-sum[l[i]-1]<<endl;
    }

    return 0;
}

