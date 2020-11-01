#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    string S,day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int i;

    cin>>S;

    for(i = 0;i < 7;i++){
        if(S == day[i]){
            cout<<7 - i<<endl;
        }
    }

    return 0;
}