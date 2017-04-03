#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int n,m;cin >>n>>m;
    if(n==0) break;
    std::vector<int> h,w;
    for(int i=0;i<n;i++){
      int he;cin>>he;
      h.push_back(he);
    }
    for(int i=0;i<m;i++){
      int wi;cin >> wi;
      w.push_back(wi);
    }
    multiset<int> hsum,wsum;
    for(int i=0;i<n;i++){
      int tmp=0;
      for(int j=i;j<n;j++){
        tmp+=h[j];
        hsum.insert(tmp);
      }
    }
    for(int i=0;i<m;i++){
      int tmp=0;
      for(int j=i;j<m;j++){
        tmp+=w[j];
        wsum.insert(tmp);
      }
    }
    int res=0;
    for(int i=0;i<(int)hsum.size();i++){
      auto itr=hsum.begin()+(auto)i;
      //for(int j=0;j<i;j++) itr++;
      res+=wsum.count(*itr);
    }
    cout << res<<endl;
  }
}
