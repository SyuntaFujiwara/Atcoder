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

    ll a,b,k,l;
    cin>>a>>b>>k>>l;
    long double B=b;
    if(B/l>a){
        if(k%a==0){
            cout<<k*a<<endl;
            return 0;
        }
    }
    else{
        cout<<min(b*(k/l)+(k-l*(k/l))*a,b*(1+k/l))<<endl;
    }


    return 0;
}