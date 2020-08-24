#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int w,h;
    cin>>w>>h;
    if(w%16==0&&h%9==0)cout<<"16:9"<<endl;
    else cout<<"4:3"<<endl;

    return 0;
}
