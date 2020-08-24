#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w,k,cnt=0;
    cin>>h>>w>>k;
    int c[h][w],d[h][w];
    rep(i,w){
        rep(j,h){
            cin>>c[i][j];
        }
    }

    for(int bit=0;bit<h+w;++bit){
        rep(a,w){
            rep(b,h){
                d[a][b]=c[a][b];
            }
        }
        for(int i=0;i<h+w;++i){
            if(bit&(1<<i)){
                if(i<h){
                    rep(x,w){
                        d[i][x]='.';
                    }
                }
                else{
                    rep(y,h){
                        d[y][i-h-1]='.';
                    }
                }
            }
        }
        int b_cnt=0;
        rep(a,w){
            rep(b,h){
                if(d[a][b]=='#')b_cnt++;
            }
        }
        if(b_cnt==k)cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
