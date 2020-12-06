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

    ll x,y;
    cin>>x>>y;
    int a,b;
    cin>>a>>b;
    ll str=x,exp=0;
    bool flag=false;
    while(1){
        if(str+b>=y){
            break;
        }
        if(str+b>str*a){
            str*=a;
            exp++;
            if(pow(a,1000000)<b){
                str=str*pow(a,1000000);
                exp+=1000000;
            }
        }
        else{
            exp=exp+(y-str-1)/b;
            break;
        }
    }
    cout<<exp<<endl;

    return 0;
}