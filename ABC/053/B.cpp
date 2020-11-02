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

    string s;
    cin>>s;
    int a;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a=i;
            break;
        }
    }
    int z;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='Z'){
            z=i;
            break;
        }
    }
    cout<<z-a+1<<endl;

    return 0;
}