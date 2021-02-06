#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
void cf(long double x,long double r,int *low,int *high){
    *low=ceil(x-r);
    *high=floor(x+r);
}
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    long double x,y,r;
    cin>>x>>y>>r;
    int start,end,top,bottom;
    cf(x,r,&start,&end);
    ll num=0;
    long double p;
    for(int i=start;i<=end;i++){
        p=sqrt(pow(r,2)-pow((x-(double)i),2));
        cf(y,p,&bottom,&top);
        for(int j=bottom;j<=top;j++){
            num=num+1;
        }
    }
    cout<<num<<endl;

    return 0;
}

