#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d,n;
    cin>>d>>n;
    int ans=pow(100,d);
    if(n==100)n++;
    if(ans==0)cout<<n<<endl;
    else cout<<ans*n<<endl;

    return 0;
}