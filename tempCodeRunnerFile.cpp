#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    string S;

    cin>>S;

    if(S=='Sunny')
        cout<<"Cloudy"<<endl;
    else if(S=="Cloudy")
        cout<<"Rainy"<<endl;
    else
        cout<<"Sunny"<<endl;
    


    return 0;
}