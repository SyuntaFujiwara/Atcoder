#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A1,A2,A3;

    cin>>A1>>A2>>A3;

    if(A1 + A2 + A3 > 21)
        cout<<"bust"<<endl;
    else
        cout<<"win"<<endl;

    return 0;
}
