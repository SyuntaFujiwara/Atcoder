#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<p>p(n);
    rep(i,n){
        cin>>p[i].first>>p[i].second;
        a[i]=p[i].first;
        b[i]=p[i].second;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(p.begin(),p.end());
    int min_b=b[0];
    int min_b_i=0;
    for(int i=0;i<n;i++){
        if(min_b==p[i].second){
            min_b=p[i].second;
            min_b_i=i;
        }
    }
    int ans=1e9+5;
    if(min_b_i!=0){
        ans=max(a[0],b[0]);
    }
    else{
        ans=min(max(a[0],b[1]),max(a[1],b[0]));
        ans=min(ans,a[0]+b[0]);
    }
    cout<<ans<<endl;

    return 0;
}

