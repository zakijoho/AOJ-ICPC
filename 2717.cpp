#include <bits/stdc++.h>

using namespace std;

const int INF = numeric_limits<int>::max() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,m;cin>>n>>m;
  int imos_w[n+2]={0},imos_e[n+2]={0},wsum=0,esum=0;
  for(int i=0;i<m;i++){
      string s;cin>>s;
      for(int j=1;j<=n;j++){
          if(s[j-1]=='W'){
              imos_w[j]++;
              wsum++;
          }
          else{
              imos_e[j]++;
              esum++;
          }
      }
  }
  for(int i=1;i<=n;i++){
      imos_w[i]+=imos_w[i-1];
      imos_e[i]+=imos_e[i-1];
  }
  int res,dif_min=INF;
  for(int i=0;i<=n;i++){
      int tmp=imos_e[i]+(wsum-imos_w[i]);
      //cout<<tmp<<endl;
      if(dif_min>tmp){
          dif_min=tmp;
          res=i;
      }
  }
  cout<<res<<" "<<res+1<<endl;
}
