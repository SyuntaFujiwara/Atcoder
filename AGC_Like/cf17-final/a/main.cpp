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
    int cnt[4]={0,4,6,8};
    vector<string>aki;
    for(int bit=0;bit<(1<<4);bit++){
        string t="AKIHABARA";
        for(int i=3;i>=0;i--){
            if(bit&(1<<i)){
                t.erase(t.begin()+cnt[i]);
            }
        }
        aki.push_back(t);
    }
    for(int i=0;i<aki.size();i++){
        if(s==aki[i]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

