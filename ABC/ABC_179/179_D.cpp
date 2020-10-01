#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;
    bool s[n];
    rep(i,k){
        int l,r;
        cin>>l>>r;
        l--;r--;
        for(int j=l;j<r;j++){
            s[j]=true;
        }
    }



    return 0;
}