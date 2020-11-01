#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,k;
    cin>>n>>k;
    int p[n];
    ll c[n];
    rep(i,n)cin>>p[i];
    rep(i,n)cin>>c[i];
    ll max_score=-1;
    int loop_in,loop_out;
    ll score=0,loopin_score=0,loopout_score=0;
    rep(i,n){
        score=0,loopin_score=0,loopout_score=0;
        int flag[n]={};
        int j=i;
        while(1){
            
            if(flag[j]==1)break;
            flag[j]=1;
            j=p[j]-1;
            loop_out++;
            loopout_score+=c[p[j]-1];
        }
        while(1){
            if(flag[j]==2)break;
            flag[j]=2;
            j=p[j]-1;
            loop_in++;
            loopin_score+=c[p[j]-1];
        }
        loop_out-=loop_in;
        loopout_score-=loopin_score;
        if(k<loop_out){
            j=i;
            rep(t,k){
                j=p[j]-1;
                score+=c[p[j]];
            }
        }
        else{
            k-=loop_out;
            score=loopout_score+loopin_score*(k/loop_in);
            rep(t,k%loop_in){
                j=p[j]-1;
                score+=c[p[j]-1];
            }
        }
        max_score=max(max_score,score);
    }
    cout<<max_score<<endl;

    return 0;
}
