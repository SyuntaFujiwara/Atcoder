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

    int a,b;
    cin>>a>>b;
    vector<int>p(a);
    rep(i,a)cin>>p[i];
    vector<int>q(b);
    rep(i,b)cin>>q[i];
    vector<int>res(10);
    rep(i,a){
        res[p[i]]=1;
    }
    rep(i,b){
        res[q[i]]=2;
    }
    if(res[7]==0)cout<<"x ";
    else if(res[7]==1)cout<<". ";
    else cout<<"o ";
    if(res[8]==0)cout<<"x ";
    else if(res[8]==1)cout<<". ";
    else cout<<"o ";
    if(res[9]==0)cout<<"x ";
    else if(res[9]==1)cout<<". ";
    else cout<<"o ";
    if(res[0]==0)cout<<"x"<<endl;
    else if(res[0]==1)cout<<"."<<endl;
    else cout<<"o"<<endl;
    cout<<" ";
    if(res[4]==0)cout<<"x ";
    else if(res[4]==1)cout<<". ";
    else cout<<"o ";
    if(res[5]==0)cout<<"x ";
    else if(res[5]==1)cout<<". ";
    else cout<<"o ";
    if(res[6]==0)cout<<"x"<<endl;
    else if(res[6]==1)cout<<"."<<endl;
    else cout<<"o"<<endl;
    cout<<"  ";
    if(res[2]==0)cout<<"x ";
    else if(res[2]==1)cout<<". ";
    else cout<<"o ";
    if(res[3]==0)cout<<"x"<<endl;
    else if(res[3]==1)cout<<"."<<endl;
    else cout<<"o"<<endl;
    cout<<"   ";
    if(res[1]==0)cout<<"x"<<endl;
    else if(res[1]==1)cout<<"."<<endl;
    else cout<<"o"<<endl;

    return 0;
}