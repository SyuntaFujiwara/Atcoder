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
    vector<int>h(n);
    rep(i,n)cin>>h[i];
    for(int i=0;;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(h[j]>0){
                h[j]--;
                flag=false;
            }
            else{
                if(!flag)break;
            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }
}