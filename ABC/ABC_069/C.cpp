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
    int cnt=0;
    int cnt_2=0;
    rep(i,n){
        if(a[i]%4==0){
            cnt++;
        }
        else if(a[i]%2==0){
            cnt_2++;
        }
    }
    if(cnt+cnt_2/2>=n/2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}