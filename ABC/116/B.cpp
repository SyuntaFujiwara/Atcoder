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

    int s;
    cin>>s;
    vector<int>a(1000005);
    a.at(0)=s;
    for(int i=1;;i++){
        if(a[i-1]%2==0){
            a[i]=a[i-1]/2;
        }
        else{
            a[i]=a[i-1]*3+1;
        }
        if(count(a.begin(),a.end(),a[i])==2){
            cout<<i+1<<endl;
            return 0;
        }
    }

    return 0;
}