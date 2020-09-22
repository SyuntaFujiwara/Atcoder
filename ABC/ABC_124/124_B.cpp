#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int h[n];
    rep(i,n){
        cin>>h[i];
    }
    int cnt=0;
    rep(i,n){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(h[i]<h[j])flag=false;
        }
        if(flag)cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}