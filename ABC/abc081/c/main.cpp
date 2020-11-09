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

    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    vector<int>b(n,0);
    rep(i,n){
        b[a[i]-1]++;
    }
    sort(b.begin(),b.end());
    int cnt=n;
    int ans=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            cnt--;
        }
        else{
            int num=cnt-k;
            for(int j=0;j<num;j++){
                ans+=b[i++];
            }
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}