#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin>> n;
  int come[120000]={0};
  come[0]++;
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a>>b;
    come[a]++;
    come[b+1]--;
  }
  for(int i=1;i<120000;i++) come[i]+=come[i-1];
  int res=0;
  for(int i=2;i<120000;i++){
    if(i<=come[i]) res=i;
  }
  cout << res << endl;
}
