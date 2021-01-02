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
    int l[n];
    rep(i,n)cin>>l[i];
    sort(l,l+n);
    int cnt=0;
    rep(i,n){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                if((l[i]!=l[j]&&l[j]!=l[k]&&l[j]!=l[k])&&l[k]<l[i]+l[j]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
