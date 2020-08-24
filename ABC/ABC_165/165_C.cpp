#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    long long int N,M,Q,a[50],b[50],c[50],d[50],A[10]={},max_sum=0,sum=0,h,i,j,k,l,m,n,o,p,q,r,flag=1;

    cin>>N>>M>>Q;
    rep(i,Q){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }

    for(i=0;i<N;i++){
        A[i]++;
    }
    for(int i=0;i<Q;i++){
            if(A[b[i]]-A[a[i]]==c[i]){
                sum+=d[i];
            }
        }
        if(sum>max_sum){
            max_sum=sum;
        }
        A[0]++;

    
    
        
        
    
    cout<<max_sum<<endl;

    return 0;
}
