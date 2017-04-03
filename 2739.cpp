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

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,m,t;
  cin >> n >> m >>t;
  int res=0;
  int a[n+1];
  for(int i=1;i<=n;i++) cin >> a[i];
  res += max(0,a[1]-m);
  for(int i=1;i<n;i++) res+= max(0,a[i+1]-a[i]-2*m);
  res+= max(0,t-a[n]);
  cout << res << endl;
}
