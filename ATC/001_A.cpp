#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int h,w;
char maze[500][500];
bool reached[500][500];
void search(int x,int y){
    if(x<0||h<=x||y<0||w<=y||maze[x][y]=='#')return;
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

    cin>>h>>w;
    int sh,sw,gh,gw;
    rep(i,h){
        rep(j,w){
            cin>>maze[i][j];
            if(maze[i][j]=='s'){
                sh=i;sw=j;
            }
            if(maze[i][j]=='g'){
                gh=i;gw=j;
            }
        }
    }
    search(sh,sw);
    if(reached[gh][gw])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
