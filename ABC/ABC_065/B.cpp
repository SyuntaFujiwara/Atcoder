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
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    int next=0;
    int cnt=1;
    vector<bool>b(n,false);
    while(1){
        if(b[next]==true){
            cout<<-1<<endl;
            return 0;
        }
        if(a[next]==2){
            cout<<cnt<<endl;
            return 0;
        }
        b[next]=true;
        next=a[next]-1;
        cnt++;
    }
}