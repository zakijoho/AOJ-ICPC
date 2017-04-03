#include <bits/stdc++.h>

using namespace std;


#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),v).end()

#define PB(a) push_back(a)
#define MOD 1000000007

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
  int n;cin>>n;
  if(n==0) break;
  int t[n+2][n+2];
  for(int i=1;i<=n;i++)for(int j=0;j<=n;j++) cin>>t[i][j];
  std::vector<int> dp((1<<n),INF);
  dp[0]=0;
  for(int i=0;i<(1<<n);i++){
      for(int j=0;j<n;j++){
          int tmp = i & ~(1<<j);//j番目を除く集合
          if(i & (1<<j)){
              for(int k=0;k<n;k++){
                  dp[i]=min(dp[i],dp[tmp]+t[j+1][0]);
                  if(tmp & (1<<k))dp[i]=min(dp[i],dp[tmp]+t[j+1][k+1]);
              }
          }
      }
  }
  cout<<dp[(1<<n)-1]<<endl;
  }
  return 0;
}
