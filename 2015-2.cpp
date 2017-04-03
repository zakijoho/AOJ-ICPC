#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    int n,m;cin >>n>>m;
    if(n==0) break;
    int h[1024*1500]={0},w[1024*1500]={0};
    int tmp_h[n+1],tmp_w[m+1];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
      cin>>tmp_h[i];
      sum1+=tmp_h[i];
    }
    for(int i=0;i<m;i++){
      cin >> tmp_w[i];
      sum2+=tmp_w[i];
    }
    for(int i=0;i<n;i++){
      int tmp=0;
      for(int j=i;j<n;j++){
        tmp+=tmp_h[j];
        h[tmp]++;
      }
    }
    for(int i=0;i<m;i++){
      int tmp=0;
      for(int j=i;j<m;j++){
        tmp+=tmp_w[j];
        w[tmp]++;
      }
    }
    long long  res=0;
    for(int i=1;i<=min(sum1,sum2);i++){
        res+=h[i]*w[i];
    }
    cout << res<<endl;
  }
}
