#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
char sea[10][10];
bool reached[10][10];
int o_cnt=0;
void search(int x,int y){
    if(x<0||10<=x||y<0||10<=y||sea[x][y]=='x')return;
    if(reached[x][y])return;

    reached[x][y]=true;

    search(x+1,y);
    search(x-1,y);
    search(x,y+1);
    search(x,y-1);
}
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    bool flag=false;
    int sh,sw;
    rep(i,10){
        rep(j,10){
            cin>>sea[i][j];
            if(sea[i][j]=='o'){
                o_cnt++;
                sh=i;
                sw=j;
            }
        }
    }
    rep(i,10){
        rep(j,10){
            if(sea[i][j]=='o')continue;
            sea[i][j]='o';
            memset(reached,0,sizeof(reached));
            search(sh,sw);
            int o_dfs=0;
            rep(k,10){
                rep(l,10){
                    if(reached[k][l])o_dfs++;
                }
            }
            if(o_cnt+1==o_dfs)flag=true;
            sea[i][j]='x';
        }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



    return 0;
}
