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
    int 
    N=pow(2,n);
    vector<int>a(N);
    rep(i,N)cin>>a[i];
    int fmax=-1;
    int fi;
    int bmax=-1;
    int bi;
    rep(i,N){
        if(i<N/2){
            if(chmax(fmax,a[i]))fi=i+1;

        }
        else{
            if(chmax(bmax,a[i]))bi=i+1;
        }
    }
    if(fmax<bmax)cout<<fi<<endl;
    else cout<<bi<<endl;

    return 0;
}
