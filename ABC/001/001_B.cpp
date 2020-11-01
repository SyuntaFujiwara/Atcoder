#include <bits/stdc++.h>
#include <cctype>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m;
    cin>>m;
    if(m<100)cout<<"00"<<endl;
    else if(m<1000)cout<<0<<m/100<<endl;
    else if(m<=5000)cout<<m/100<<endl;
    else if(m<=30000)cout<<m/1000+50<<endl;
    else if(m<=70000)cout<<(m/1000-30)/5+80<<endl;
    else cout<<89<<endl;

    return 0;
}