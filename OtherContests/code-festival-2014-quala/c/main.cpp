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

    int a,b;
    cin>>a>>b;
    int ans=0;
    int i=a;
    for(;i<=b;i++){
        if(i%400==0){
            ans++;
            break;
        }
        else if(i%4==0&&i%100!=0)ans++;
    }
    for(;i<=b-400;i+=400){
        ans+=97;
    }
    for(;i<=b;i++){
        if(i%4==0&&i%100!=0)ans++;
    }
    cout<<ans<<endl;

    return 0;
}

