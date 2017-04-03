#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int n,w;cin >>n>>w;
    if(n==0) break;
    ld res=0.01;
    int v[101]={0};
    for(int i=0;i<n;i++){
      int a;cin>>a;
      v[a/w]++;
    }
    int ma=-1,koumoku=0;
    for(int i=0;i<101;i++){
      ma=max(ma,v[i]);
      if(v[i]!=0) koumoku=i;
    }
    for(int i=0;i<koumoku;i++){
      res+=(1-i/koumoku)*(v[i]/ma);
    }
    cout <<res<<endl;
  }
}
