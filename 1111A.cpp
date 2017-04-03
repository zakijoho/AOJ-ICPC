#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;
const ll MOD = 1000000007;

ll comb(int n,int k){
  int m = 1;
  if(n < 2 * k) k = n - k;
  for(int i=1;i<=k+1;i++)   m = m * (n - i + 1) / i;
  return m;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,m,k;
  cin >> n >> m >>k;
  ll res=0;
  for(int i=0;i<=k;i++){
    res = (res+comb(n+m+k+i,n+i))%MOD;
  }
  cout << res << endl;
}
