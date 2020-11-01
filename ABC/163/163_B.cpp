#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int n,m,i;

    cin >>n>>m;

    int a[n];

    for(i = 0;i < m;i++){
        cin >>a[i];
        n = n - a[i];
    }
    if(n < 0)
        cout <<-1<<endl;
    else
        cout <<n<<endl;
        

    return 0;
}