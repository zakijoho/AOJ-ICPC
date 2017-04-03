#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,h,w;cin>>n>>w>>h;
  int tate[200010]={0},yoko[200010]={0};
  for(int i=0;i<n;i++){
    int x,y,wi;cin>>x>>y>>wi;
    tate[max(y-wi,0)]++;tate[min(h+1,y+wi)]--;
    yoko[max(x-wi,0)]++;yoko[min(w+1,x+wi)]--;
  }
  for(int i=1;i<w;i++) yoko[i]+=yoko[i-1];
  for(int i=1;i<h;i++) tate[i]+=tate[i-1];
  bool flag1=true,flag2=true;
  for(int i=0;i<w;i++) if(yoko[i]==0) flag1=false;
  for(int i=0;i<h;i++) if(tate[i]==0) flag1=false;
  if(flag1||flag2) cout<<"Yes"<<endl;
  else cout<<"No" <<endl;
}
