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

    ll n;
    cin>>n;
    for(int i=1;i<=37;i++){
        for(int j=1;j<=26;j++){
            if(powl(3,i)+powl(5,j)==n){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            else if(powl(3,i)+powl(5,j)>n){
                break;
            }
        }
    }
    cout<<-1<<endl;


    return 0;
}