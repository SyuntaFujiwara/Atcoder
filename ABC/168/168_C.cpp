#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    double a,b,h,m;
    cin>>a>>b>>h>>m;
    double ml=m*6;
    double hl=0.5*m+h*30;
    double kaku=max(ml,hl)-min(ml,hl);
    double ans;
    ans=pow(a,2)+pow(b,2)-2*a*b*cos(kaku/180*M_PI);
    ans=sqrt(ans);
    cout<<fixed<<setprecision(16)<<ans<<endl;

    return 0;
}
