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

    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    rep(i,n)cin>>a[i];
    vector<string>b(n);
    rep(i,m)cin>>b[i];
    for(int i=0;i<n-m||i==0;i++){
        for(int j=0;j<n-m||j==0;j++){
            bool flag=true;
            int x=0;
            int y=0;
            for(int k=0;k<m;k++){
                if(!flag)break;
                for(int l=0;l<m;l++){
                    if(a[k+i][l+j]!=b[k][l]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

    return 0;
}