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

    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int cntA=0,cntB=0;
    rep(i,n){
        bool flag=false;
        if(s[i]=='a'){
            if(cntA+cntB<a+b){
                cntA++;
                cout<<"Yes"<<endl;
                flag=true;
            }
        }
        else if(s[i]=='b'){
            if(cntA+cntB<a+b&&cntB<b){
                cntB++;
                cout<<"Yes"<<endl;
                flag=true;
            }
        }
        if(!flag){
            cout<<"No"<<endl;
        }
    }

    return 0;
}