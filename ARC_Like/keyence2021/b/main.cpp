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
    map<int,int>a;
    int A;
    rep(i,n){
        cin>>A;
        a[A]++;
    }
    vector<int>box(min(k,a[0]));
    for(auto [key,value]:a){
        for(int i=0;i<value;i++){
            if(i<box.size()&&box[i]==key-1)box[i]=key;
        }
    }
    int ans=0;
    for(int i=0;i<box.size();i++){
        ans+=box[i]+1;
    }
    cout<<ans<<endl;

    return 0;
}

