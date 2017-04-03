#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;cin >> n;
  int res=0;
  while(n>1){
    res++;
    n/=3;
  }
  cout << res << endl;
}
