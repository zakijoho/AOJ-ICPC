#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,m;
  while(true){
    cin >> n >> m;
    if(n==0) break;
    bool infected[n+1];
    for(int i=2;i<n+1;i++) infected[i]=false;
    infected[1]=true;
    int s[m+1],d[m+1];
    vector<pair<int,int>> t;
    for(int i=1;i<=m;i++){
      int tmp;
      cin >> tmp >> s[i] >> d[i];
      t.push_back(make_pair(tmp,i));
    }
    sort(t.begin(),t.end());
    for(int i=0;i<m;i++){
      int idx=t[i].second;
      if(infected[s[idx]]) infected[d[idx]]=true;
    }
    int res=0;
    for(int i=1;i<=n;i++) if(infected[i]) res++;
    cout << res<< endl;
  }
}
