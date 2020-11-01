#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    
    int H,A,cnt,i;

    cin>>H>>A;

    if(H % A == 0){
		cnt = H / A;
    }
    else{
		cnt = H / A + 1;
    }

    cout<<cnt<<endl;
    

    return 0;
}