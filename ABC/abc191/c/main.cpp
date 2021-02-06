#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int h,w;
    cin>>h>>w;
    vector<vector<char>>s(h,vector<char>(w));
    rep(i,h){
        rep(j,w)cin>>s[i][j];
    }
    vector<p>l;
    vector<p>r;
    vector<p>t;
    vector<p>b;
    rep(i,h){
        rep(j,w){
            if(s[i][j]!='#')continue;
            if(i-1>=0&&s[i-1][j]=='.')t.push_back(make_pair(i,j));
            if(i+1<=h-1&&s[i+1][j]=='.')b.push_back(make_pair(i,j));
            if(j-1>=0&&s[i][j-1]=='.')l.push_back(make_pair(i,j));
            if(j+1<=w-1&&s[i][j+1]=='.')r.push_back(make_pair(i,j));
        }
    }
    int ans=4;
    int x,y;
    if(t.size()>2){
        x=t[1].first-t[0].first;
        y=t[1].second-t[0].second;
        for(int i=2;i<t.size();i++){
            if(t[i].first-t[i-1].first!=x||t[i].second-t[i-1].second!=y){
                x=t[i].first-t[i-1].first;
                y=t[i].second-t[i-1].second;
                ans++;
            }
        }
    }
    if(b.size()>2){
        x=b[1].first-b[0].first;
        y=b[1].second-b[0].second;
        for(int i=2;i<b.size();i++){
            if(b[i].first-b[i-1].first!=x||b[i].second-b[i-1].second!=y){
                x=b[i].first-b[i-1].first;
                y=b[i].second-b[i-1].second;
                ans++;
            }
        }
    }
    if(l.size()>2){
        x=l[1].first-l[0].first;
        y=l[1].second-l[0].second;
        for(int i=2;i<l.size();i++){
            if(l[i].first-l[i-1].first!=x||l[i].second-l[i-1].second!=y){
                x=l[i].first-l[i-1].first;
                y=l[i].second-l[i-1].second;
                ans++;
            }
        }
    }
    if(r.size()>2){
        x=r[1].first-r[0].first;
        y=r[1].second-r[0].second;
        for(int i=2;i<r.size();i++){
            if(r[i].first-r[i-1].first!=x||r[i].second-r[i-1].second!=y){
                x=r[i].first-r[i-1].first;
                y=r[i].second-r[i-1].second;
                ans++;
            }
        }
    }
    if((r==t||r==b||l==t||l==b)&&(h!=3||w!=3))ans--;
    cout<<ans<<endl;

    return 0;
}

