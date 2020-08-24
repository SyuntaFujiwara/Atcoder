#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    
    string S,T,U;
    int A,B;

    cin>>S>>T>>A>>B>>U;

    if(S == U){
        cout<<A - 1<<" "<<B<<endl;
    }
    else
    {
        cout<<A<<" "<<B - 1<<endl;
    }
    

    return 0;
}