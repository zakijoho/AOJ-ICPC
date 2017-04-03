#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int n,m;cin >>n>>m;
    if(n==0) break;
    int r,q;
    int time[m+1][721];
    for(int i=0;i<m+1;i++)for(int j=0;j<721;j++)time[i][j]=0;
    cin>>r;
    for(int i=0;i<r;i++){
      int t,pc,stu,s;cin>>t>>pc>>stu>>s;
      t-=540;
      if(s) time[stu][t]++;
      else time[stu][t]--;
    }
    for(int i=1;i<=m;i++)for(int j=1;j<721;j++)time[i][j]+=time[i][j-1];
    cin>>q;
    for(int i=0;i<q;i++){
      int ts,te,stu;cin>>ts>>te>>stu;
      int res=0;
      ts-=540;te-=540;
      for(int j=ts;j<te;j++)if(time[stu][j])res++;
      cout <<res<<endl;
    }
  }
}
