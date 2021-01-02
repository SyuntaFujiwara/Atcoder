#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int x[5];
    rep(i,5)cin>>x[i];
    rep(i,5){
        if(x[i]==0){
            cout<<i+1<<endl;
        }
    }

    return 0;
}
