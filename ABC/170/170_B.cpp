#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int x,y;
    cin>>x>>y;
    string flag="No";
    for(int i=0;i<=x;i++){
        if(i*2+(x-i)*4==y){
            flag="Yes";
            break;
        }
    }
    cout<<flag<<endl;

    return 0;
}
