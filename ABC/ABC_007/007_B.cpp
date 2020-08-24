#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
int main(int argc, const char * argv[]) {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int r,c,sy,sx,gy,gx;
    cin>>r>>c>>sy>>sx>>gy>>gx;
    char maze[r][c];
    rep(i,r){
        rep(j,c){
            cin>>maze[i][j];
        }
    }
    sx--;sy--;gx--;gy--;
    vector<vector<int>> dist(r,vector<int>(c,-1));
    dist[sy][sx]=0;

    queue<pair<int,int>>que;
    que.push(make_pair(sx,sy));

    while(!que.empty()){
        pair<int,int> current_pos=que.front();
        int y=current_pos.first;
        int x=current_pos.second;
        que.pop();

        rep(i,4){
            int next_x=x+dx[i];
            int next_y=y+dy[i];
            if(next_x<0||next_x>=c||next_y<0||next_y>=r)continue;
            if(maze[next_y][next_x]=='#')continue;

            if(dist[next_y][next_x]==-1){
                que.push(make_pair(next_y,next_x));
                dist[next_y][next_x]=dist[y][x]+1;
            }
        }
    }
    cout<<dist[gy][gx]<<endl;
    return 0;
}
