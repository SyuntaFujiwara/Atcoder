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
    if(m==0){
        cout<<1<<endl;
        return 0;
    }
    vector<int>a(m);
    rep(i,m){
        cin>>a[i];
        a[i]--;
    }
    int min_a=1e9;
    int prev=-1;
    vector<int>b;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    rep(i,m){
        if(a[i]-prev-1>0){
            b.push_back(a[i]-prev-1);
            chmin(min_a,a[i]-prev-1);
            prev=a[i];
        }
    }
    if(n-prev-1>0){
        chmin(min_a,n-prev-1);
        b.push_back(n-prev-1);
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    int ans=0;
    for(int i=0;i<b.size();i++){
        int plus=b[i]/min_a;
        if(b[i]%min_a!=0){
            plus++;
        }
        ans+=plus;
    }
    cout<<ans<<endl;

    return 0;
}