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
    int n;
    cin>>n;
    vector<int>l(n);
    vector<int>r(n);
    rep(i,n){
        cin>>l[i]>>r[i];
        l[i]--;r[i]--;
    }
    for(int i=0;i<n;i++){
        string t=s;
        int k=0;
        for(int j=l[i];j<=r[i];j++){
            s[j]=t[r[i]-k++];
        }
    }
    cout<<s<<endl;

    return 0;
}