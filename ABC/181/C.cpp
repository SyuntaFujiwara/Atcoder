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

    int n;
    cin>>n;
    double x[n];
    double y[n];
    rep(i,n)cin>>x[i]>>y[i];
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(x[j]==x[i]){
                    if(x[k]==x[i]){
                        flag=true;
                    }
                    continue;
                }
                long double l=y[k]-y[i];
                long double r=((y[j]-y[i])/(x[j]-x[i]))*(x[k]-x[i]);
                if(l==r){
                    cout<<"Yes"<<endl;;
                    return 0;;
                }
            }
        }
    }
    cout<<"No"<<endl;

    return 0;
}