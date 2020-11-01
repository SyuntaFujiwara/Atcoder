#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    if(n<60)cout<<"Bad"<<endl;
    else if(n<90)cout<<"Good"<<endl;
    else if(n<100)cout<<"Great"<<endl;
    else cout<<"Perfect"<<endl;

    return 0;
}
