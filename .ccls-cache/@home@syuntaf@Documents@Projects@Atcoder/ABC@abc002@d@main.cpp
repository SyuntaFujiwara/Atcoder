#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    int x,y;
    int con[12][12]={};
    p p[m];
    rep(i,m){
        cin>>x>>y;
        x--;y--;
        con[x][y]=con[y][x]=1;
    }
    int maxt=-1;
    for(int bit=0;bit<(1<<n);++bit){
        int a=bitset<16>(bit).count();
        if(a<maxt)continue;
        
        bool flag=1;
        rep(i,n){
            rep(j,i){
                if(bit>>i&1&&bit>>j&1&&con[i][j]==0)
                    flag=0;
            }
        }
        if(flag!=0)maxt=a;
    }
    cout<<maxt<<endl;


    return 0;
}
