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
    int ans=0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=a;b++){
            if(a*b<n){
                if(a==b)ans++;
                else ans+=2;
            }
            else break;
        }
    }
    cout<<ans<<endl;

    return 0;
}