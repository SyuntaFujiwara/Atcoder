#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    vector<int>n(5);
    rep(i,5)cin>>n[i];
    map<int,int>m;
    rep(i,3){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<5;k++){
                m[n[i]+n[j]+n[k]]++;
            }
        }
    }
    int cnt=0;
    for(auto [key,value]:m){
        cnt++;
        if(m.size()-cnt==2)cout<<key<<endl;
    }


    return 0;
}

