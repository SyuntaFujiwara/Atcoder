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

    string n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=(n[i]-'0');
    }
    if(std::stoi(n)%sum==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}