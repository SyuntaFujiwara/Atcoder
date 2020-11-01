#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int k;
    cin>>k;
    if(k%2==0){
        cout<<-1<<endl;
    }
    else{
        int x=7,y=7;
        for(int i=0;;i++){
            if(x%k==0){
                cout<<i+1<<endl;
                break;
            }
            y=y*10;
            x=x+y;
        }
    }

    return 0;
}
