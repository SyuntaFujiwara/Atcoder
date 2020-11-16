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

    string a,b;
    cin>>a>>b;
    if(a.size()>b.size()){
        cout<<"GREATER"<<endl;
        return 0;
    }
    else if(a.size()<b.size()){
        cout<<"LESS"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a>b){
                cout<<"GREATER"<<endl;
                return 0;
            }
            else if(a<b){
                cout<<"LESS"<<endl;
                return 0;
            }
        }
    }
    cout<<"EQUAL"<<endl;

    return 0;
}