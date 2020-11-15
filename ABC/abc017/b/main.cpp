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

    string x;
    cin>>x;
    bool flag=true;
    for(int i=0;i<x.size();i++){
        if(x[i]=='c'){
            if(i+1<x.size()&&x[++i]!='h'){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(x[i]=='o'){
        }
        else if(x[i]=='k'){
        }
        else if(x[i]=='u'){
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}