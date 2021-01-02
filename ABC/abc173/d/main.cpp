#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int a[n];
    rep(i,n)cin>>a[i];
    sort(a,a+n,greater<int>());
    int sum=0;
    for(int i=1;i<n;i++){
        rep(j,i){
            
        }
    }
    cout<<sum<<endl;

    return 0;
}
