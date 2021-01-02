#include <bits/stdc++.h>
using namespace std;
void comb(vector<vector <long long int> > &v){
  for(int i = 0;i <v.size(); i++){
    v[i][0]=1;
    v[i][i]=1;
  }
  for(int k = 1;k <v.size();k++){
    for(int j = 1;j<k;j++){
      v[k][j]=(v[k-1][j-1]+v[k-1][j]);
    }
  }
}

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,K,i,ans=0;
    vector<vector<long long int> > v(N+1,vector<long long int>(N+1,0));
    comb(v);

    cin >>N>>K;


    for(i = K;i < N+2;i++){
      ans += v[N+1][i];
      
    }
    cout <<ans<<endl;

    return 0;
}
