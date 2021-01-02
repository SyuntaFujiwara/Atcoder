#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m,x,min_p=1e9;
    cin>>n>>m>>x;
    int c[n];
    int a[n][m];
    rep(i,n){
        cin>>c[i];
        rep(j,m){
            cin>>a[i][j];
        }
    }
    for(int bit=0;bit<(1<<n);++bit){
        int und[m]={};
        int price=0,flag=1;
        rep(i,n){
            if(bit&(1<<i)){
                price+=c[i];
                rep(j,m){
                    und[j]+=a[i][j];   
                }
            }
        }
        rep(k,m){
            if(und[k]<x)flag=0;
        }
        if(flag==1)min_p=min(min_p,price);
    }
    if(min_p==1e9)cout<<-1<<endl;
    else cout<<min_p<<endl;

    return 0;
}
