#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,n;
    cin>>a>>b>>n;
    for(int i=n;;i++){
        if(i%a==0&&i%b==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
