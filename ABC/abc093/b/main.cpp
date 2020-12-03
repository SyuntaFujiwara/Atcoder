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

    int a,b,k;
    cin>>a>>b>>k;
    a--;b--;
    vector<bool>x(1e9,false);
    for(int i=a;i<a+k;i++){
        if(i>b)break;
        x[i]=true;
    }
    for(int i=b;i>b-k;i--){
        if(i<a)break;
        x[i]=true;
    }
    for(int i=0;i<1e9;i++){
        if(x[i])cout<<i+1<<endl;
    }

    return 0;
}