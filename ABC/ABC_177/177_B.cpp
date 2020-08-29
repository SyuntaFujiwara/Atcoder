#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s,t;
    cin>>s>>t;
    int max_cnt=-1;
    for(int i=0;i<s.size();i++){
        string u=s.substr(i,t.size());
        int cnt=0;
        if(t.size()!=u.size())break;
        for(int j=0;j<t.size();j++){
            if(t[j]==u[j])cnt++;
        }
        max_cnt=max(max_cnt,cnt);
    }
    cout<<t.size()-max_cnt<<endl;

    return 0;
}
