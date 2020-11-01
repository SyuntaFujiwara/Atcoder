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
    int num;
    if(b==100)num=1000*a+b;
    else if(b<10)num=10*a+b;
    else num=100*a+b;
    int ans=sqrt(num);
    if(num==ans*ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}