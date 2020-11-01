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

    string s,t;
    cin>>s>>t;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(s==t){
            cout<<"Yes"<<endl;
            return 0;
        }
        char x=t[0];
        for(int j=0;j<t.size();j++){
            if(j+1<t.size()){
                t[j]=t[j+1];
            }
            else{
                t[j]=x;
            }
        }
    }
    cout<<"No"<<endl;

    return 0;
}