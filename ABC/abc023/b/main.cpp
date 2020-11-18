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

    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s=="b"){
        cout<<0<<endl;
        return 0;
    }
    string t="b";
    for(int i=1;t.size()<=n+1;i++){
        if(i%3==1){
            t="a"+t+"c";
        }
        else if(i%3==2){
            t="c"+t+"a";
        }
        else{
            t="b"+t+"b";
        }
        if(s==t){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}