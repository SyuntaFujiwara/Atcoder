#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int n,a,ans[200000],i;

    for(i = 0;i < 200000;i++){
        ans[i] = 0;
    }

    cin >>n;
    for(i = 0;i < n-1;i++){
        cin >>a;
        ans[a-1]++;
    }
    for(i = 0;i < n;i++){
        cout <<ans[i]<<endl;
    }

    return 0;
}
