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

    vector<string> s;
    string str;
    while(1){
        cin>>str;
        if(!cin.good())break;
        s.push_back(str);
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=="Left")cout<<"<";
        else if(s[i]=="Right")cout<<">";
        else if(s[i]=="AtCoder")cout<<"A";
        if(i!=s.size()-1)cout<<" ";
        else cout<<endl;
    }

    return 0;
}