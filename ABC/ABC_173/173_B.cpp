#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,A=0,W=0,T=0,R=0;
    cin>>n;
    string s;
    rep(i,n){
        cin>>s;
        if(s=="AC")A++;
        else if(s=="WA")W++;
        else if(s=="TLE")T++;
        else if(s=="RE")R++;
    }
    cout<<"AC x "<<A<<endl;
    cout<<"WA x "<<W<<endl;
    cout<<"TLE x "<<T<<endl;
    cout<<"RE x "<<R<<endl;

    return 0;
}
