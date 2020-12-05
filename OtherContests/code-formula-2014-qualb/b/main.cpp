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

    string n;
    cin>>n;
    int sumA=0,sumB=0;
    for(int i=0;i<n.size();i++){
        if(i%2==0)sumA=sumA+(n[i]-'0');
        else sumB=sumB+(n[i]-'0');
    }
    if(n.size()%2==0)cout<<sumA<<" "<<sumB<<endl;
    else cout<<sumB<<" "<<sumA<<endl;

    return 0;
}