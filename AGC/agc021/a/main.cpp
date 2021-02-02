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
    if(n.size()==1){
        cout<<n<<endl;
        return 0;
    }
    int ans=9*(n.size()-1)+n[0]-'1';
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=(n[i]-'0');
    }
    chmax(ans,sum);
    sum=sum-n[n.size()-1]+'0'+8;
    chmax(ans,sum);
    cout<<ans<<endl;

    return 0;
}

