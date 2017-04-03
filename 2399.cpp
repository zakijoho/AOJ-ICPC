#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin >> n,n){
    int suspected[n+1]={0};
    std::vector<int> owner[n+1];
    for(int i=1;i<=n;i++){
      int m;cin >>m;
      for(int j=0;j<m;j++){
        int p;cin >>p;
        owner[p].push_back(i);
      }
    }
    int k;cin >>k;
    for(int i=0;i<k;i++){
      int idx;
      cin >> idx;
      int len=owner[idx].size();
      for(int i=0;i<len;i++) suspected[owner[idx][i]]++;
    }
    int res=-1;
    bool humei=false;
    for(int i=1;i<=n;i++){
      if(suspected[i]==k){
        if(res<0)res=i;
        else humei=true;
      }
    }
    if(humei || res<0) cout << -1 << endl;
    else cout << res << endl;
  }
}
