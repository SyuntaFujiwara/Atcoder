#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b/a==d/c)cout<<"DRAW"<<endl;
    else if(b/a<d/c)cout<<"AOKI"<<endl;
    else cout<<"TAKAHASHI"<<endl;

    return 0;
}
