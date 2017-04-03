#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<ll> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
      int n,m;cin>>n>>m;
      if(n==0 && m==0) break;
      VVI dp(n+1,vector<ll>(256,INF));
      std::vector<int> c(m),x(n+1);
      for(int i=0;i<m;i++) cin>>c[i];
      for(int i=1;i<=n;i++) cin>>x[i];
      //ll dp[n+1][256];
      for(int i=0;i<n+1;i++)for(int j=0;j<256;j++)dp[i][j]=INF;
      dp[0][128]=0;
      for(int i=0;i<n;i++)for(int j=0;j<256;j++){
          for(int k=0;k<m;k++){
              if(j+c[k]>255) dp[i+1][255]=min(dp[i+1][255],dp[i][j]+(255-x[i+1])*(255-x[i+1]));
              else if(j+c[k]<0) dp[i+1][0]=min(dp[i+1][0],dp[i][j]+(x[i+1])*(x[i+1]));
              else dp[i+1][j+c[k]]=min(dp[i+1][j+c[k]],dp[i][j]+(j+c[k]-x[i+1])*(j+c[k]-x[i+1]));
          }
      }
      ll res=INF;
      for(int i=0;i<256;i++) res=min(res,dp[n][i]);
      cout<<res<<endl;
  }
  return 0;
}
