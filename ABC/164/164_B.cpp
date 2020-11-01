#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    
    int A,B,C,D,i;

    cin >>A>>B>>C>>D;

    while(1){
        
        C = C - B;
        if(C <=0 )
            break;
        A = A - D;
        if( A <= 0)
            break;
    }
    
    if(A <= 0){
        cout << "No"<<endl;
    }
    else
    {
        cout <<"Yes"<<endl;
    }
    

    return 0;
}
