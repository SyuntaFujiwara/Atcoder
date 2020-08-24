#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    char s[5];
    int n,cnt=0;
    rep(i,5)cin>>s[i];
    cin>>n;
    rep(i,5){
        rep(j,5){
            cnt++;
            if(cnt==n){
                cout<<s[i]<<s[j]<<endl;
            }
        }
    }

    return 0;
}
