#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int a,b,k;
    cin>>a>>b>>k;
    for(int i=0;i<k;i++){
        if(i%2==0){
            if(a%2==1)a--;
            a=a/2;
            b+=a;
        }
        else{
            if(b%2==1)b--;
            b=b/2;
            a+=b;
        }
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}

