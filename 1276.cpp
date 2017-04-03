#include <bits/stdc++.h>

using namespace std;

int const MAX=1299709;
int prime[MAX+1]={0};//0::prime 1::NOTprime;

void hurui(){
  prime[1]=1;
  for(int i=1;i*i<=MAX;i++){
    for(int j=2;j<=MAX/i;j++){
      if(prime[i]==0)prime[i*j]=1;
    }
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin >> n,n){
    int res=0;
    if(prime[n]==0){
      cout << res << endl;
    }
    else{
      int mae=n,ato=n+1;
      while(prime[mae]==1){
        res++;
        mae--;
      }
      while(prime[ato]==1){
        res++;
        ato++;
      }
      cout << res+1 << endl;
    }
  }
}
