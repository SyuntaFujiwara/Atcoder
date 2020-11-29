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
    vector<int>p(n);
    vector<int>q(n);
    rep(i,n)cin>>p[i];
    rep(i,n)cin>>q[i];
    vector<int>x=p;
    sort(x.begin(),x.end());
    int num=1;
    for(int i=1;i<=n;i++){
        num*=i;
    }
    vector<vector<int>>m(num,vector<int>(n));
    int k=0;
    do{
        for(int i=0;i<n;i++){
            m[k][i]=x[i];
        }
        k++;
    }while(next_permutation(x.begin(),x.end()));
    sort(m.begin(),m.end());
    int a,b;
    for(int i=0;i<m.size();i++){
        if(m[i]==p)a=i+1;
        if(m[i]==q)b=i+1;
    }
    cout<<abs(a-b)<<endl;

    return 0;
}