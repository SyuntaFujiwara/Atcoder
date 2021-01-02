#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    string n;
    cin>>n;
    int sum=0;
    rep(i,n.size()){
        sum+=(n[i]-'0');
    }
    if(sum%9==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
