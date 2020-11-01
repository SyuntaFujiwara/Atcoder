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

    int n;
    cin>>n;
    int ans;
    int max_c=-1;
    for(int i=1;i<=n;i++){
        int x=i;
        int cnt=0;
        while(1){
            if(x%2==0&&x!=0){
                cnt++;
                x/=2;
            }
            else{
                break;
            }
        }
        if(cnt>max_c){
            ans=i;
            max_c=cnt;
        }
    }
    cout<<ans<<endl;

    return 0;
}