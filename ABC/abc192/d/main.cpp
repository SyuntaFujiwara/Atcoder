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

    string X;
    cin>>X;
    ll m;
    cin>>m;
    int max_x=0;
    int x_size=X.size();
    vector<int>x;
    for(int i=0;i<X.size();i++){
        int y=X[i]-'0';
        x.push_back(y);
        chmax(max_x,y);
    }
    max_x++;
    int ans=0;
    ll prev=0;
    for(int i=max_x;;i++){
        ll sum=0;
        for(int j=x_size-1;j>=0;j--){
            sum+=(x[j])*pow(i,x_size-j-1);
        }
        if(sum<prev)break;
        if(sum<=m)ans++;
        else break;
        prev=sum;
    }
    cout<<ans<<endl;

    return 0;
}

