#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,k,m;
  while(cin>>n>>k>>m,n|k|m){
    std::vector<int> v;
    for(int i=1;i<=n;i++) v.push_back(i);
    int pos=m-1;
    while(v.size()>1){
      v.erase(v.begin()+pos);
      pos=(pos+m-1)%v.size();
    }
    cout << v[0]<<endl;
  }
}
