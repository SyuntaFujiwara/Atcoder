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

    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;;i++){
        if(i%2==0)n-=a;
        else n-=b;
        if(n<=0){
            if(i%2==0)cout<<"Ant"<<endl;
            else cout<<"Bug"<<endl;
            return 0;
        }
    }
}

