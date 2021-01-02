#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    
    int A,B,C;

    cin>>A>>B>>C;

    if((A != B && A != C && B != C) || (A == B && A == C && B == C)){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    return 0;
}