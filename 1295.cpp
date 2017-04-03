#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int w,d;
  while(cin>>w>>d){
    if(w==0) break;
    int h[30]={0};
    int res=0;
    std::vector<int> x(w+1),y(d+1);
    for(int i=0;i<w;i++){
      cin>>x[i];
      h[x[i]]++;
      res+=x[i];
    }
    for(int i=0;i<d;i++){
      cin>>y[i];
      if(h[y[i]]>0){
        h[y[i]]--;
      }
      else res+=y[i];
    }
    cout<<res<<endl;
  }
  return 0;
}
