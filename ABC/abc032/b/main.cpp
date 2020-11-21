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
    int k;
    cin>>k;
    int cnt=0;
    map<string,bool>m;
    for(int i=0;i<s.size();i++){
        string t="";
        for(int j=i;j<i+k;j++){
            if(j>=s.size()){
                break;
            }
            else{
                t+=s[j];
            }
        }
        if(t.size()==k){
            m[t]=true;
        }
    }
    cout<<m.size()<<endl;

    return 0;
}