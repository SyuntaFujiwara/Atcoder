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

    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    int sum=0;
    rep(i,n)sum+=a[i];
    if(sum%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    int avg=sum/n;
    sum=0;
    int cnt=0;
    int ans=0;
    rep(i,n){
        sum+=a[i];
        cnt++;
        if(sum==cnt*avg){
            sum=0;
            cnt=0;
            continue;
        }
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}