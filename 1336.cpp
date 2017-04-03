#include <bits/stdc++.h>

using namespace std;


int dist(int l,int pos,string dir){
    if(dir=="L") return pos;
    else return l-pos;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,l;
  while(cin>>n>>l,n){
      int res=-1;
      for(int i=0;i<n;i++){
          string d;cin>>d;
          int p;cin>>p;
          int tmp=dist(l,p,d);
          res=max(res,tmp);
      }
      cout<<res<<endl;
  }
}
