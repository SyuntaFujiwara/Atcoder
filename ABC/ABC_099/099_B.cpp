#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<b-a;i++){
        ans+=i;
    }
    cout<<ans-a<<endl;

    return 0;
}