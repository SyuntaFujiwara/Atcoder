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

    ll n;
    cin>>n;
    n--;
    ll cnt=0;
    string ans;
    int digit;
    for(int i=1;;i++){
        cnt+=pow(26,i);
        if(n+1<=cnt){
            digit=i;
            break;
        }
    }
    for(int i=0;i<digit;i++){
        ans+=((n%26)+'a');
        n=n/26-1;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    return 0;
}