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

  int n;
  while(true){
    cin >> n;
    if(n==0) break;
    std::vector<int> v;
    for(int i=0;i<n;i++){
      int a;cin >> a;v.push_back(a);
    }
    sort(v.begin(),v.end());
    int res=INF;
    for(int i=0;i<n-1;i++) res=min(res,v[i+1]-v[i]);
    cout << res << endl;
  }
}
